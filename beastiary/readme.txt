:: How to format the definition of a creature for this simulator ::

Example Creature:

Mr. Weekling
7
7
7
7
7
7
1
Punch
Str
1d4+1
Instant_Damage

Here is a description of the values for each line:

line[0] = creature's name
line[1] = creature's strength score
line[2] = creature's dexterity score
line[3] = creature's constitution score
line[4] = creature's wisdom score
line[5] = creature's intelligence score
line[6] = creature's charisma score
line[7] = number of actions

Per Action line values:
line[x] = action name
line[x+1] = action modifier
line[x+2] = damage dice (sans modifier)
line[x+3] = type of statuss effect

Status Effect Descriptions:
// TODO
