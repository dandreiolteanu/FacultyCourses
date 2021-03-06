var score = 0;

setTimeout(function() {
  setInterval(function() {
    spawnImage();
  }, 500);
  setInterval(function() {
    $(".images-area")
      .children()
      .first()
      .remove();
  }, 700);
}, 100);

function getRandomInt(min, max) {
  return Math.floor(Math.random() * (max - min + 1)) + min;
}

function spawnImage() {
  var gameScreenWidth = $(".images-area").width();
  var gameScreenHeight = $(".images-area").height();

  var randWidth = Math.floor(Math.random() * gameScreenWidth);
  var randHeight = Math.floor(Math.random() * gameScreenHeight);

  var image = $(document.createElement("img"));
  image.addClass("theImg");
  image.attr(
    "src",
    "iphones.png"
  );
  image.css({
    top: randHeight,
    left: randWidth,
    position: "absolute"
  });

  image.animate(
    {
      width: 120,
      height: 120
    },
    500
  );

  image.click(function() {
    image.remove()
    score = score + 1;
    $("#scoreLabel").text("Current score -> " + score);
    if (score == 10) {
      winningAlert();
    }
  });

  $(".images-area").append(image);
}

function winningAlert() {
  $(".images-area").empty();
  score = 0;
  $("#scoreLabel").text("Current score -> " + score);
  alert("You Won !!!");
}
