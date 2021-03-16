# I decided to use ruby for this because the 
# interpreter apparently has very good memeory
# management, and for a function that works with large numbers this is important
# to me


def isprime(value)
  begin
    value.to_f
  rescue TypeError
    puts "Fatal error: Only accepted types are integer and float"
    puts "Terminating"
  end
  
  half = value / 2
  i = 2.0
  while i < half
    
    if value % i == 0.0
      return false
    end

    i += 1.0
  
  end
  
  return true
end

puts isprime 94473772242342433.0 # just an example 
