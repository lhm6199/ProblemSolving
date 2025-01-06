def create_player(name, xp, team):
    return{
        "name" : name,
        "xp" : xp,
        "team" : team
    }

def insert_team(team,player):
    try:
        team[player["team"]].insert(player["name"])
    except:
        team[player["team"]] = [player["name"]]
    return 0

nico = create_player("nico", "10", "team x")
lynn = create_player("lynn", "12" , "team Blue")

team = {}

insert_team(team, nico)
insert_team(team, lynn)
print(team)