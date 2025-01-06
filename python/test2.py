class Player:
    def __init__(self, name, team):
        self.name = name
        self.xp = 500
        self.team = team

class Team:
    def __init__(self, team_name):
        self.team_name = team_name
        self.members = []
    def add_players(self, name):
        self.members.append(Player(name, self.team_name))
    
    def print_members(self):
        for member in self.members:
            print(f"I am {member.name}!")

    def del_member(self, name):
        for idx in range(len(self.members)):
            if self.members[idx].name == name:
                del self.members[idx]

    def show_xp(self):
        sum_xp = 0
        for member in self.members:
            sum_xp += member.xp
        print(f"Total XP is {sum_xp}")
team_x = Team("Team_x")
team_y = Team("Team_y")

team_x.add_players("Nico")
team_y.add_players("Lynn")

team_y.print_members()
team_y.show_xp()

team_y.del_member("Lynn")
team_y.print_members()
