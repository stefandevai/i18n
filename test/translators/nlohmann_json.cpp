#include <i18n/i18n.hpp>
#include <i18n/translators/nlohmann_json.hpp>
#include <catch2/catch_test_macros.hpp>

TEST_CASE("translator::nlohmann_json", "[translators]") {
  using namespace i18n::literals;

  i18n::set_locale("");
  i18n::initialize_translator<i18n::translators::nlohmann_json>();

  REQUIRE("moon"_t == "moon");
  REQUIRE("sun"_t == "sun");
  REQUIRE("star"_t == "star");
  REQUIRE("colors.black"_t == "colors.black");
  REQUIRE("colors.red"_t == "colors.red");
  REQUIRE("colors.white"_t == "colors.white");
  REQUIRE("animals.felines.cat"_t == "animals.felines.cat");
  REQUIRE("animals.felines.tiger"_t == "animals.felines.tiger");
  REQUIRE("animals.felines.jaguar"_t == "animals.felines.jaguar");
  REQUIRE("animals.reptiles.crocodile"_t == "animals.reptiles.crocodile");
  REQUIRE("animals.reptiles.snake"_t == "animals.reptiles.snake");
  REQUIRE("animals.reptiles.lizard"_t == "animals.reptiles.lizard");
  REQUIRE(""_t == "");

  REQUIRE(i18n::t("moon") == "moon");
  REQUIRE(i18n::t("sun") == "sun");
  REQUIRE(i18n::t("star") == "star");
  REQUIRE(i18n::t("colors.black") == "colors.black");
  REQUIRE(i18n::t("colors.red") == "colors.red");
  REQUIRE(i18n::t("colors.white") == "colors.white");
  REQUIRE(i18n::t("animals.felines.cat") == "animals.felines.cat");
  REQUIRE(i18n::t("animals.felines.tiger") == "animals.felines.tiger");
  REQUIRE(i18n::t("animals.felines.jaguar") == "animals.felines.jaguar");
  REQUIRE(i18n::t("animals.reptiles.crocodile") == "animals.reptiles.crocodile");
  REQUIRE(i18n::t("animals.reptiles.snake") == "animals.reptiles.snake");
  REQUIRE(i18n::t("animals.reptiles.lizard") == "animals.reptiles.lizard");
  REQUIRE(i18n::t("") == "");

  i18n::set_locale("en");

  REQUIRE("moon"_t == "Moon");
  REQUIRE("sun"_t == "Sun");
  REQUIRE("star"_t == "star");
  REQUIRE("colors.black"_t == "Black");
  REQUIRE("colors.red"_t == "Red");
  REQUIRE("colors.white"_t == "colors.white");
  REQUIRE("animals.felines.cat"_t == "Cat");
  REQUIRE("animals.felines.tiger"_t == "Tiger");
  REQUIRE("animals.felines.jaguar"_t == "animals.felines.jaguar");
  REQUIRE("animals.reptiles.crocodile"_t == "Crocodile");
  REQUIRE("animals.reptiles.snake"_t == "Snake");
  REQUIRE("animals.reptiles.lizard"_t == "animals.reptiles.lizard");
  REQUIRE(""_t == "");

  REQUIRE(i18n::t("moon") == "Moon");
  REQUIRE(i18n::t("sun") == "Sun");
  REQUIRE(i18n::t("star") == "star");
  REQUIRE(i18n::t("colors.black") == "Black");
  REQUIRE(i18n::t("colors.red") == "Red");
  REQUIRE(i18n::t("colors.white") == "colors.white");
  REQUIRE(i18n::t("animals.felines.cat") == "Cat");
  REQUIRE(i18n::t("animals.felines.tiger") == "Tiger");
  REQUIRE(i18n::t("animals.felines.jaguar") == "animals.felines.jaguar");
  REQUIRE(i18n::t("animals.reptiles.crocodile") == "Crocodile");
  REQUIRE(i18n::t("animals.reptiles.snake") == "Snake");
  REQUIRE(i18n::t("animals.reptiles.lizard") == "animals.reptiles.lizard");
  REQUIRE(i18n::t("") == "");

  i18n::set_locale("es");

  REQUIRE("moon"_t == "Luna");
  REQUIRE("sun"_t == "Sol");
  REQUIRE("star"_t == "star");
  REQUIRE("colors.black"_t == "Negro");
  REQUIRE("colors.red"_t == "Rojo");
  REQUIRE("colors.white"_t == "colors.white");
  REQUIRE("animals.felines.cat"_t == "Gato");
  REQUIRE("animals.felines.tiger"_t == "Tigre");
  REQUIRE("animals.felines.jaguar"_t == "animals.felines.jaguar");
  REQUIRE("animals.reptiles.crocodile"_t == "Cocodrilo");
  REQUIRE("animals.reptiles.snake"_t == "Víbora");
  REQUIRE("animals.reptiles.lizard"_t == "animals.reptiles.lizard");
  REQUIRE(""_t == "");

  REQUIRE(i18n::t("moon") == "Luna");
  REQUIRE(i18n::t("sun") == "Sol");
  REQUIRE(i18n::t("star") == "star");
  REQUIRE(i18n::t("colors.black") == "Negro");
  REQUIRE(i18n::t("colors.red") == "Rojo");
  REQUIRE(i18n::t("colors.white") == "colors.white");
  REQUIRE(i18n::t("animals.felines.cat") == "Gato");
  REQUIRE(i18n::t("animals.felines.tiger") == "Tigre");
  REQUIRE(i18n::t("animals.felines.jaguar") == "animals.felines.jaguar");
  REQUIRE(i18n::t("animals.reptiles.crocodile") == "Cocodrilo");
  REQUIRE(i18n::t("animals.reptiles.snake") == "Víbora");
  REQUIRE(i18n::t("animals.reptiles.lizard") == "animals.reptiles.lizard");
  REQUIRE(i18n::t("") == "");

  i18n::set_locale("en");

  REQUIRE("moon"_t == "Moon");
  REQUIRE("sun"_t == "Sun");
  REQUIRE("star"_t == "star");
  REQUIRE("colors.black"_t == "Black");
  REQUIRE("colors.red"_t == "Red");
  REQUIRE("colors.white"_t == "colors.white");
  REQUIRE("animals.felines.cat"_t == "Cat");
  REQUIRE("animals.felines.tiger"_t == "Tiger");
  REQUIRE("animals.felines.jaguar"_t == "animals.felines.jaguar");
  REQUIRE("animals.reptiles.crocodile"_t == "Crocodile");
  REQUIRE("animals.reptiles.snake"_t == "Snake");
  REQUIRE("animals.reptiles.lizard"_t == "animals.reptiles.lizard");

  REQUIRE(i18n::t("moon") == "Moon");
  REQUIRE(i18n::t("sun") == "Sun");
  REQUIRE(i18n::t("star") == "star");
  REQUIRE(i18n::t("colors.black") == "Black");
  REQUIRE(i18n::t("colors.red") == "Red");
  REQUIRE(i18n::t("colors.white") == "colors.white");
  REQUIRE(i18n::t("animals.felines.cat") == "Cat");
  REQUIRE(i18n::t("animals.felines.tiger") == "Tiger");
  REQUIRE(i18n::t("animals.felines.jaguar") == "animals.felines.jaguar");
  REQUIRE(i18n::t("animals.reptiles.crocodile") == "Crocodile");
  REQUIRE(i18n::t("animals.reptiles.snake") == "Snake");
  REQUIRE(i18n::t("animals.reptiles.lizard") == "animals.reptiles.lizard");
}

TEST_CASE("translator::nlohmann_json (custom directory)", "[translators]") {
  using namespace i18n::literals;

  i18n::set_locale("en");
  i18n::initialize_translator<i18n::translators::nlohmann_json>("data/translations");

  REQUIRE("moon"_t == "Moon");
}
