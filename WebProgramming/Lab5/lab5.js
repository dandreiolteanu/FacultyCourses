$(function(){
    $(".small-images").hover(function(e){
        var imageSrc = $(this).attr("src")
        var href = $(this).attr("href");
        $(".big-image img").attr("src", imageSrc);
        e.preventDefault();
        return false;
    });
});