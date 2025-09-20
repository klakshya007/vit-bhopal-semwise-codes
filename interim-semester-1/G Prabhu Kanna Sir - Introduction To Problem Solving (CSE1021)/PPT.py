class TaxiBookingSystem:
    def __init__(self):
        self.locations = {
            1: "Station",
            2: "Airport",
            3: "Mall",
            4: "Hotel",
            5: "University",
        }
        self.taxi_types = {
            1: {"type": "Standard", "rate_per_km": 10},
            2: {"type": "Premium", "rate_per_km": 15},
            3: {"type": "Luxury", "rate_per_km": 25},
        }
        self.bookings = []

    def display_locations(self):
        print("\nAvailable Locations:")
        for key, value in self.locations.items():
            print(f"{key}. {value}")

    def display_taxi_types(self):
        print("\nAvailable Taxi Types:")
        for key, value in self.taxi_types.items():
            print(f"{key}. {value['type']} (₹{value['rate_per_km']} per km)")

    def calculate_fare(self, distance, rate_per_km):
        return distance * rate_per_km

    def book_taxi(self):
        print("\nWelcome to the Taxi Booking System!")

        # Select Pickup Location
        self.display_locations()
        pickup = int(input("Enter the number corresponding to your pickup location: "))
        if pickup not in self.locations:
            print("Invalid location! Please try again.")
            return

        # Select Drop-Off Location
        drop_off = int(input("Enter the number corresponding to your drop-off location: "))
        if drop_off not in self.locations:
            print("Invalid location! Please try again.")
            return

        if pickup == drop_off:
            print("Pickup and drop-off locations cannot be the same. Please try again.")
            return

        # Choose Taxi Type
        self.display_taxi_types()
        taxi_choice = int(input("Enter the number corresponding to your taxi type: "))
        if taxi_choice not in self.taxi_types:
            print("Invalid taxi type! Please try again.")
            return

        # Enter Distance
        try:
            distance = float(input("Enter the distance between the locations (in km): "))
            if distance <= 0:
                print("Distance must be greater than zero. Please try again.")
                return
        except ValueError:
            print("Invalid distance! Please enter a numeric value.")
            return

        # Calculate Fare
        taxi_type = self.taxi_types[taxi_choice]["type"]
        rate_per_km = self.taxi_types[taxi_choice]["rate_per_km"]
        fare = self.calculate_fare(distance, rate_per_km)

        # Confirm Booking
        print("\nBooking Summary:")
        print(f"Pickup Location: {self.locations[pickup]}")
        print(f"Drop-Off Location: {self.locations[drop_off]}")
        print(f"Taxi Type: {taxi_type}")
        print(f"Distance: {distance} km")
        print(f"Fare: ₹{fare:.2f}")

        confirm = input("\nDo you want to confirm the booking? (yes/no): ").lower()
        if confirm == "yes":
            self.bookings.append({
                "pickup": self.locations[pickup],
                "drop_off": self.locations[drop_off],
                "taxi_type": taxi_type,
                "distance": distance,
                "fare": fare,
            })
            print("Booking confirmed! Have a safe trip.")
        else:
            print("Booking canceled.")

    def view_bookings(self):
        if not self.bookings:
            print("\nNo bookings found.")
        else:
            print("\nYour Bookings:")
            for i, booking in enumerate(self.bookings, 1):
                print(f"\nBooking {i}:")
                print(f"Pickup Location: {booking['pickup']}")
                print(f"Drop-Off Location: {booking['drop_off']}")
                print(f"Taxi Type: {booking['taxi_type']}")
                print(f"Distance: {booking['distance']} km")
                print(f"Fare: ₹{booking['fare']:.2f}")

    def run(self):
        while True:
            print("\n--- Taxi Booking System ---")
            print("1. Book a Taxi")
            print("2. View Bookings")
            print("3. Exit")
            choice = input("Enter your choice: ")

            if choice == "1":
                self.book_taxi()
            elif choice == "2":
                self.view_bookings()
            elif choice == "3":
                print("Thank you for using the Taxi Booking System. Goodbye!")
                break
            else:
                print("Invalid choice! Please try again.")

# Run the system
system = TaxiBookingSystem()
system.run()
