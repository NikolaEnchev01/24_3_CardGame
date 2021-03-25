#pragma once
enum SuitType { DefaultSuit, Clubs, Diamonds, Hearts, Spades };
enum PowerType {
  DefaultPower,
  two,
  three,
  four,
  five,
  six,
  seven,
  eight,
  nine,
  ten,
  jack,
  queen,
  king,
  ace
};
class Card {
public:
  Card() = default;
  Card(PowerType power, SuitType suit);
  void printCard() const;
  int compareCards(Card card1, Card card2) const;
  void setPower(PowerType power);
  void setSuit(SuitType suit);
  void printCardPlay() const;
  ~Card();

private:
  PowerType power{};
  SuitType suit{};
};
