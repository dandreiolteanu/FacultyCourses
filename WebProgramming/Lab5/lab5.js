$(function(){
    $(".small-images").hover(function(e){
        var imageSrc = $(this).attr("src")
        var imageName = $(this).attr("alt")
        var href = $(this).attr("href");
        $(".big-image img").attr("src", imageSrc);
        $(".big-image h3").html(imageName)
        e.preventDefault();
        return false;
    });
});