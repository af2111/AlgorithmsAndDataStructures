# I decided to use ruby for this because the 
# interpreter apparently has very good memeory
# management, and for a function that works with large numbers this is important
# to me


def isprime(value)
  
  begin # This section handles wrong types
    value.to_f
  rescue TypeError
    puts "Fatal error: Only accepted types are integer and float"
    puts "Terminating"
  end 
  
  if value == 2.0 # Handles the only exception as i is 2.0
    return true
  end
  
  half = value / 2 
  i = 2.0
  while i < half 
    if value % i == 0.0  # Checks if number is divisble wth 0.0 as remainder(if not, then the number is prime)
      return false
    end

    i += 1.0
  
  end
  
  return true
end

puts isprime 94473772242342433.0 # just an example 
