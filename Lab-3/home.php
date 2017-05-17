<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="utf-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>All about web!</title>

  <link href="css/jquery.bxslider.css" rel="stylesheet" />
	<link href="mystyle.css" type="text/css" rel="stylesheet">
	<link href="css/font-awesome.min.css" rel="stylesheet"/>
	<link rel="shortcut icon" type="image/png" href="img/icons/favicon.png"/>
	<link rel="stylesheet" href="http://code.jquery.com/ui/1.11.4/themes/smoothness/jquery-ui.css">
  <script src="https://code.jquery.com/jquery-3.1.1.js"></script>
  <script src="https://code.jquery.com/ui/1.12.1/jquery-ui.min.js"></script>
</head>
<body>

  <div id="wrapper">
    <div id="banner-wrapper">
      <header>
        <div id="header-inner">
          <a href="index.html" id="logo" title="HEH"></a>
            <nav>
              <a href="#" id="menu-icon"></a>
              <ul>
                <li><a href="home.php" class="current">Home</a></li>
                <li><a href="portofolio.html">Portofolio</a></li>
                <li><a href="index.html">Log out</a></li>
                <li><a href="#">Contact us</a></li>
              </ul>
            </nav>
        </div>
      </header>



<!--- Slider Start -->
		<script src="js/jquery.bxslider.min.js"></script><!--For Image Slider-->
    <div class="slider-wrap">
      <section class="slider">
        <ul class="slider1">
          <li><img src="img/pics/desktop-1.png" /></li>
          <li><img src="img/pics/desktop-2.png" /></li>
          <li><img src="img/pics/desktop-3.png" /></li>
        </ul>
      </section>
    </div>

		<script type="text/javascript">
			$('.slider1').bxSlider({
				mode: 'fade',
				captions: false,
				auto:true,
				pager:false,

			});
			$('.slider2').bxSlider({
				pager:false,
				captions: true,
				maxSlides: 3,
				minSlides: 1,
				slideWidth: 230,
				slideMargin: 10
			});
			$('.slider3').bxSlider({
				mode: 'fade',
				captions: false,
				auto:true,
				pager:false,
				controls:false,
			});
		</script>
<!--- Slider End -->
    </div> <!--BANNER-->

<!--COLUMNS BEGIN-->
		<section class="one-third">
			<div class="icon-wrap">
				<td>
					<i class="fa fa-desktop"></i>
				</td>
			</div>
			<h3>Web Design</h3>
		</section>
		<section class="one-third">
			<div class="icon-wrap">
				<td>
					<i class="fa fa-pencil-square-o"></i>
				</td>
			</div>
			<h3>Digital Graphics</h3>
		</section>
		<section class="one-third">
			<div class="icon-wrap">
				<td>
					<i class="fa fa-file-code-o"></i>
				</td>
			</div>
			<h3>Development</h3>
		</section>
<!-- End of the 3 colums with icons-->
<div class="clearfix-padding">

</div>

		<section class="left-col">
			<p>
				Lorem Ipsum is simply dummy text of the pe a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets contons of Lorem Ipsum.
			</p>
		</section>

		<section class="sidebar">
			<img src="img/pics/computer-white.png" />
		</section>
<!--END OF THE COLUMN AND SIDEBAR-->
<div class="clearfix-padding">

</div>

		<section class="one-third-padding">
			<h3>SOME TEXT HERE</h3>
			<img src="img/pics/computer-gal.png" />
			<p>
				At vero eos et accusamus et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque corrupti quos dolores et quas molestias excepturi sint occaecati cupiditate non provident
			</p>
		</section>

		<section class="one-third-padding">
			<h3>SOME TEXT HERE</h3>
			<img src="img/pics/900-644.png" />
			<p>
				At vero eos et accusamus et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque corrupti quos dolores et quas molestias excepturi sint occaec
			</p>
		</section>

		<section class="one-third-padding">
			<h3>SOME TEXT HERE</h3>
			<img src="img/pics/computer-guy.png" />
			<p>
				At vero eos et accusamus et iusto odio dignissimos ducimus qui blanditiis praesentium voluptatum deleniti atque corrupti quos dolores et quas molestias excepturi sint occaecddddd
			</p>
		</section>
<!--END OF THE 3 COLUMNS SECTION-->
	</div> <!---END WRAPPER-->
	<div class="clearfix-padding">

	</div>

<!--START THE FOOTER MAFAKA-->

<footer>
	<div id="banner-wrapper">
		<div class="icon-text">
			<div class="icon-text-icon">
				<ul class="footer-nav">
					<li><a href="home.php">Home</a></li>
					<li><a href="portofolio.html">Portofolio</a></li>
					<li><a href="index.html">Log out</a></li>
					<li><a href="#">Contact us</a></li>
				</ul>
			</div>
			<div class="icon-text-text">
				<ul class="social">
					<li><a href="mailto:email@gmail.com"><i class="fa fa-envelope"></i></a></li>
					<li><a href="facebook"><i class="fa fa-facebook"></i></a></li>
					<li><a href="insta"><i class="fa fa-instagram"></i></a></li>
					<li><a href="github"><i class="fa fa-github"></i></a></li>
				</ul>
			</div>
		</div>
	</div>
</footer>

<footer class="second">
	<p>
		&copy Cristi Poseletchi.
	</p>
</footer>

</body>
</html>
