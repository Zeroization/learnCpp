module prac_airline_ticket;

using namespace std;

AirlineTicket::AirlineTicket()
    : passengerName_{"Unknown Passanger"},
      numberOfMiles_{0},
      hasEliteSuperRewardsStatus_{false} {}

double AirlineTicket::calculatePriceInDollars() const {
  if (getHasEliteSuperRewardsStatus()) {
    return 0;
  }
  return getNumberOfMiles() * 0.1;
}

const string& AirlineTicket::getPassengerName() const { return passengerName_; }
void AirlineTicket::setPassengerName(const string& name) { passengerName_ = name; }

int AirlineTicket::getNumberOfMiles() const { return numberOfMiles_; }
void AirlineTicket::setNumberOfMiles(int miles) { numberOfMiles_ = miles; }

bool AirlineTicket::getHasEliteSuperRewardsStatus() const {
  return hasEliteSuperRewardsStatus_;
}
void AirlineTicket::setHasEliteSuperRewardsStatus(bool status) {
  hasEliteSuperRewardsStatus_ = status;
}
