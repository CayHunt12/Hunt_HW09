# Export GPIO pins if not already exported
echo "60" > /sys/class/gpio/export 2>/dev/null || true
echo "46" > /sys/class/gpio/export 2>/dev/null || true

# Set permissions if needed
chmod 666 /sys/class/gpio/gpio60/value
chmod 666 /sys/class/gpio/gpio46/value

# Compile the application
g++ myGpio.cpp myGpioApp.cpp -o myGpioApp

# Print message
echo "Compilation complete. Run the program using ./myGpioApp"

# Optionally, unexport GPIO pins when done
# echo "60" > /sys/class/gpio/unexport
# echo "46" > /sys/class/gpio/unexport
