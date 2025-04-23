<?php
        // 1. Assign the string "Hello World!" to a variable
        $message = "Hello World!";

        // i. Display the length of the string
        $length_of_string = strlen($message);
        echo "Length of the string: " . $length_of_string . "<br>";

        // ii. Display number of words in the string
        $number_of_words = str_word_count($message);
        echo "Number of words in the string: " . $number_of_words . "<br>";

        // iii. Display the reverse of the given string
        $reversed_string = strrev($message);
        echo "Reversed string: " . $reversed_string . "<br>";

        // iv. Display the position of "!", "Hello", and "World"
        $position_exclamation = strpos($message, "!");
        $position_hello = stripos($message, "Hello"); // Case-insensitive search
        $position_world = strpos($message, "World");
        echo "Position of '!': " . $position_exclamation . "<br>";
        echo "Position of 'Hello': " . $position_hello . "<br>";
        echo "Position of 'World': " . $position_world . "<br>";

        // v. Replace the word "World" with your name and display it
        $your_name = "Yumesh Ban 28348"; // Replace "YourName" with your actual name
        $new_message = str_replace("World", $your_name, $message);
        echo "New message: " . $new_message . "<br>";
        ?>