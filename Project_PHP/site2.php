<?php
include_once 'php.server.php';
?>

<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <title>Time management</title>
    <link rel="stylesheet" href="bootstrap/css/bootstrap.min.css">
    <link rel="stylesheet" href="site.css">
</head>

<body>
    <nav class="navbar navbar-expand-lg bg-dark navbar-dark">
        <div class="container">
            <a href="#" class="navbar-brand">Time is Escence</a>
            <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navmenu">
                <span class="navbar-toggler-icon"></span>
            </button>
            <div class="collapse navbar-collapse" id="navmenu">
                <ul class="navbar-nav ms-auto">
                    <li class="nav-item">
                        <a class="nav-link">Why Time matters</a>
                    </li>
                    <li class="nav-item">
                        <a class="nav-link">Time management</a>
                    </li>
                </ul>
            </div>
        </div>
    </nav>
    <section class="bg-dark text-light text-center p-4">
        <div class="container">
            <div class="row">
                <div class="col p-5">
                    <h1>become a timeless machine</h1>
                    <h1"><br> vinci institut</h1>
                </div>
                <div class="col">
                    <img class="w-50 rounded"
                        src=" https://image.freepik.com/free-photo/man-working-with-laptop_385-19323865.jpg" alt="">
                </div>
            </div>
        </div>
        <form class="row p-5 text-center d-sm-flex" action="site2.php" method="post">
            <div class="col p-5 float-left">Enter your profession :<input class="rounded border-danger" type="text"
                    name="name">
                <div class="row p-5"> Admin root password : <input class="w-50 h-50" type="password" name="root"></div>
            </div>
            <div class="col px-5 float-right">
                What are your available hours during the day<br>
                Between 8h15--9h45 <input class="box" type="checkbox" name="session[]" value="1"><br>
                Between 10h00--11h30<input class="box" type="checkbox" name="session[]" value="2"><br>
                Between 11h45--1h15 <input class="box" type="checkbox" name="session[]" value="3"><br>
                Between 1h30--3h00 <input class="box" type="checkbox" name="session[]" value="4"><br>
                Between 3h15--4h45 <input class="box" type="checkbox" name="session[]" value="5"><br>
                <button class="bg-dark text-light" type="button submit"><span
                        class="navbar-toggler-icon">ok</span></button>
            </div>
        </form>

    </section>
    <div class="bg-primary"><br></div>



    <?php


    $admin_root = $_POST["root"];                                                  //to erase all values***********************************************************************
    if ($admin_root == "php") {
        echo "erased";
        mysqli_query($conn, "update agenda set session1 = '--',session2 = '--',session3 = '--',session4 = '--',session5 = '--';");
    } else if ($admin_root == "") {
        $admin_root = "<div class='text-light'>No root";
        echo $admin_root;
    } else {
        echo "Root not correct";
    }




    $session = $_POST["session"];
    $name = $_POST["name"];

    if ($name == NULL or $session[0] == NULL) {
        echo "name or session not given";
        exit();
    }


    $result = mysqli_query($conn, "select * from agenda;");

    if (mysqli_num_rows($result) > 0) {
        echo "--Connection Established";
    } else {
        "--Connection not available";
    }
    $x = 0;
    while ($row = mysqli_fetch_array($result) and $x < 5) {

        $data_session[1][$x] = $row["session1"];
        $data_session[2][$x] = $row["session2"];
        $data_session[3][$x] = $row["session3"];
        $data_session[4][$x] = $row["session4"];
        $data_session[5][$x] = $row["session5"];
        $x++;
    }

    for ($x = 0; $x < sizeof($session); $x++) {
        $r = $session[$x];
        for ($y = 0; $y < 5; $y++) {
            if ($data_session[$r][$y] == "--") {
                $data_session[$r][$y] = $name;
                switch ($r) {
                    case 1:
                        switch ($y) {
                            case 0:
                                mysqli_query($conn, "update agenda set session1 = '$name' where Days='Monday';");
                                break;
                            case 1:
                                mysqli_query($conn, "update agenda set session1 = '$name' where Days='Tuesday';");
                                break;
                            case 2:
                                mysqli_query($conn, "update agenda set session1 = '$name' where Days='Wednesday';");
                                break;
                            case 3:
                                mysqli_query($conn, "update agenda set session1 = '$name' where Days='Thursday';");
                                break;
                            case 4:
                                mysqli_query($conn, "update agenda set session1 = '$name' where Days='Friday';");
                                break;
                        }
                        break;
                    case 2:
                        switch ($y) {
                            case 0:
                                mysqli_query($conn, "update agenda set session2 = '$name' where Days='Monday';");
                                break;
                            case 1:
                                mysqli_query($conn, "update agenda set session2 = '$name' where Days='Tuesday';");
                                break;
                            case 2:
                                mysqli_query($conn, "update agenda set session2 = '$name' where Days='Wednesday';");
                                break;
                            case 3:
                                mysqli_query($conn, "update agenda set session2 = '$name' where Days='Thursday';");
                                break;
                            case 4:
                                mysqli_query($conn, "update agenda set session2 = '$name' where Days='Friday';");
                                break;
                        }
                        break;
                    case 3:
                        switch ($y) {
                            case 0:
                                mysqli_query($conn, "update agenda set session3 = '$name' where Days='Monday';");
                                break;
                            case 1:
                                mysqli_query($conn, "update agenda set session3 = '$name' where Days='Tuesday';");
                                break;
                            case 2:
                                mysqli_query($conn, "update agenda set session3 = '$name' where Days='Wednesday';");
                                break;
                            case 3:
                                mysqli_query($conn, "update agenda set session3 = '$name' where Days='Thursday';");
                                break;
                            case 4:
                                mysqli_query($conn, "update agenda set session3 = '$name' where Days='Friday';");
                                break;
                        }
                        break;
                    case 4:
                        switch ($y) {
                            case 0:
                                mysqli_query($conn, "update agenda set session4 = '$name' where Days='Monday';");
                                break;
                            case 1:
                                mysqli_query($conn, "update agenda set session4 = '$name' where Days='Tuesday';");
                                break;
                            case 2:
                                mysqli_query($conn, "update agenda set session4 = '$name' where Days='Wednesday';");
                                break;
                            case 3:
                                mysqli_query($conn, "update agenda set session4 = '$name' where Days='Thursday';");
                                break;
                            case 4:
                                mysqli_query($conn, "update agenda set session4 = '$name' where Days='Friday';");
                                break;
                        }
                        break;
                    case 5:
                        switch ($y) {
                            case 0:
                                mysqli_query($conn, "update agenda set session5 = '$name' where Days='Monday';");
                                break;
                            case 1:
                                mysqli_query($conn, "update agenda set session5 = '$name' where Days='Tuesday';");
                                break;
                            case 2:
                                mysqli_query($conn, "update agenda set session5 = '$name' where Days='Wednesday';");
                                break;
                            case 3:
                                mysqli_query($conn, "update agenda set session5 = '$name' where Days='Thursday';");
                                break;
                            case 4:
                                mysqli_query($conn, "update agenda set session5 = '$name' where Days='Friday';");
                                break;
                        }
                        break;
                }
                break;
            }
        }
    }





    ?>
    <table class="table table-striped table-bordered bg-light border-dark text-centre">
        <tr>
            <th>Hours/Days</th>
            <th>8h15--9h45</th>
            <th>10h00--11h30</th>
            <th>11h45--1h15</th>
            <th>1h30--3h00</th>
            <th>3h15--4h45</th>
        </tr>
        <tr>
            <td>Monday</td>
            <td><?php echo $data_session[1][0] ?></td>
            <td><?php echo $data_session[2][0] ?></td>
            <td><?php echo $data_session[3][0] ?></td>
            <td><?php echo $data_session[4][0] ?></td>
            <td><?php echo $data_session[5][0] ?></td>
        </tr>

        <tr>
            <td>Tuesday</td>
            <td><?php echo $data_session[1][1] ?></td>
            <td><?php echo $data_session[2][1] ?></td>
            <td><?php echo $data_session[3][1] ?></td>
            <td><?php echo $data_session[4][1] ?></td>
            <td><?php echo $data_session[5][1] ?></td>
        </tr>
        <tr>
            <td>Wednesday</td>
            <td><?php echo $data_session[1][2] ?></td>
            <td><?php echo $data_session[2][2] ?></td>
            <td><?php echo $data_session[3][2] ?></td>
            <td><?php echo $data_session[4][2] ?></td>
            <td><?php echo $data_session[5][2] ?></td>
        </tr>
        <tr>
            <td>Thursday</td>
            <td><?php echo $data_session[1][3] ?></td>
            <td><?php echo $data_session[2][3] ?></td>
            <td><?php echo $data_session[3][3] ?></td>
            <td><?php echo $data_session[4][3] ?></td>
            <td><?php echo $data_session[5][3] ?></td>
        </tr>
        <tr>
            <td>Friday</td>
            <td><?php echo $data_session[1][4] ?></td>
            <td><?php echo $data_session[2][4] ?></td>
            <td><?php echo $data_session[3][4] ?></td>
            <td><?php echo $data_session[4][4] ?></td>
            <td><?php echo $data_session[5][4] ?></td>
        </tr>
    </table>
</body>

</html>