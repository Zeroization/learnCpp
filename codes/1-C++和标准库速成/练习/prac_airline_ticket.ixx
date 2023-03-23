export module prac_airline_ticket;
import <string>;

export class AirlineTicket {
 public:
  AirlineTicket();

  double calculatePriceInDollars() const;

  const std::string& getPassengerName() const;
  void setPassengerName(const std::string& name);

  int getNumberOfMiles() const;
  void setNumberOfMiles(int miles);

  bool getHasEliteSuperRewardsStatus() const;
  void setHasEliteSuperRewardsStatus(bool status);

 private:
  std::string passengerName_;
  int numberOfMiles_;
  bool hasEliteSuperRewardsStatus_;
};