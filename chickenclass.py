import random

class Chicken:
    def __init__ (self, name, hunger=0):
        self.name = name
        self.hunger = hunger
    
    def update(self):
        self.hunger +=5
        egg = random.randrange(1,100)
        if self.hunger < 30:
            if egg <= 50:
                return 1
                
            else:
                return 0
    
    def feed(self, food):
        self.hunger -= food
        print("Peck peck!")
    
    def pet(self):
        reaction = random.randrange(1, 100)
        if reaction <= 30:
            print("Purrrrrrr")
        elif reaction <= 50:
            print("Cluck cluck! :)")
        elif reaction <= 65:
            print("My enemies shall perish")
        elif reaction <= 95:
            print ("Buk buk!")
        else:
            print("Hello mario")
    
    def Info(self):
        print("Bok bok my name is ", self.name, ". My hunger level is ", self.hunger, ". ")
        
bob = Chicken("Bob")       
lucifer = Chicken("Lucifer")
petedavidson = Chicken("Pete Davidson")
numEggs = 0

while True:
    
    bob.update()
    lucifer.update()
    petedavidson.update()
    if bob.update() == 1:
        print("BOK BOK!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!")
        numEggs +=1
    if lucifer.update() == 1:
        print("BOK BOK!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!")
        numEggs +=1
    if petedavidson.update() == 1:
        print("BOK BOK!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!")
        numEggs +=1
    print("you have ", numEggs," eggs!")
    
    choice = input("Do you want to (p)et , (f)eed, or check (i)nfo?")
    if choice == 'p':
        bob.pet()
        lucifer.pet()
        petedavidson.pet()
        
    elif choice == 'f':
        bob.feed(int(input("How much food do you want to feed bob?")))
        lucifer.feed(int(input("How much food do you want to feed lucifer?")))
        petedavidson.feed(int(input("How much food do you want to feed pete davidson?")))
        
    elif choice == 'i':
        bob.Info()
        lucifer.Info()
        petedavidson.Info()
    else:
        print("Get off my farm!")
        break
    
        
