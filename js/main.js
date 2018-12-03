$("#btn-search").click(function(){
    var id = $("#input-search-id").val();
    var jqxhr = $.get( "https://iridum.github.io/JutgeSolved/solutions/cpp/"+id+".cc", function(data) {
        data = data.replace(/</g, '&lt;').replace(/>/g, '&gt;');
        $("#code-container").html(data).each(function(i, block) {
            hljs.highlightBlock(block);
        });
        $("#container-search").addClass("d-none").removeClass("d-flex");
        $("#container-info").addClass("d-none").removeClass("d-flex");
        $("footer").addClass("d-none").removeClass("d-flex");
        $("#container-view").addClass("d-flex").removeClass("d-none");
    }).fail(function(data) {
        $("#error-problem").addClass("d-flex").removeClass("d-none");
    });
});

$('a[href*="#"]').on('click', function (e) {
    e.preventDefault();

    $('html, body').animate({
            scrollTop: $($(this).attr('href')).offset().top
    }, 500, 'linear');
});
$(window).bind('storage', function (e) {
    $("#btn-unlock").addClass("disabled d-none");
    $("#btn-search").removeClass("disabled d-none");
});

if ('serviceWorker' in navigator) {
    navigator.serviceWorker
            .register('./service-worker.js')
            .then(function() { console.log('Service Worker Registered'); });
}
