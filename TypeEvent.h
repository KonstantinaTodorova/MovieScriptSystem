#pragma once

enum TypeEvent
{
    Cheat,
    Murder,
    Scandal,
    Disinterest,
    Relationship

};
inline std::ostream& operator<<(std::ostream & os, TypeEvent& event)
{
  switch (event) {
      case Cheat:
          os << "Cheat";
          break;
      case Murder:
          os << "Murder";
          break;
      case Scandal:
         os << "Scandal";
         break;
      case Disinterest:
         os << "Disinterest";
         break;
      case Relationship:
          os << "Relationship - in love with the other person";
          break;
    };
  return os;
}
