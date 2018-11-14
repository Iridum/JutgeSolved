$("#btn-search").click(function(){
    var id = $("#input-search-id").val();
    var jqxhr = $.get( "solutions/cpp/"+id+".cc", function(data) {
        data = data.replace(/</g, '&lt;').replace(/>/g, '&gt;');
        $("#code-container").html(data).each(function(i, block) {
            hljs.highlightBlock(block);
        });
        $("#container-search").addClass("d-none").removeClass("d-flex");
        $("footer").addClass("d-none").removeClass("d-flex");
        $("#container-view").addClass("d-flex").removeClass("d-none");
    }).fail(function(data) {
        $("#error-problem").addClass("d-flex").removeClass("d-none");
    });
});