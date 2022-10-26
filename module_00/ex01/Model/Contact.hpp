//
// Created by Cristie Dell on 8/25/22.
//

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact {
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

public:
	// Constructor/Destructor
	Contact();
	~Contact();

	// Getters
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getPhoneNumber() const;
	std::string getSecret() const;

	// Setters
	void setFirstName(std::string name);
	void setLastName(std::string name);
	void setNickname(std::string nick);
	void setPhoneNumber(std::string number);
	void setSecret(std::string secret);
};


#endif //CONTACT_HPP
