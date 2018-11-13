
$("#btn-search").click(function(){
    var id = $("#input-search-id").val();
    var jqxhr = $.get( "solutions/cpp/"+id+".cc", function(data) {
        data = data.replace(/</g, '&lt;').replace(/>/g, '&gt;');
        $("#code-container").html(data).each(function(i, block) {
            hljs.highlightBlock(block);
        });
        $('html, body').animate({
            scrollTop: $("#code-info").offset().top
        }, 750, 'linear');
    }).fail(function(data) {
        alert( "Error: problem not found." );
    });
});