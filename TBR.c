#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct book
{
    char name[100];  //stores book name
    char author[100];  //stores author name
    int g;  //stores genre id
    int a;  //stores author id
};

int main()
{  
    
//storing some bookish facts which will be randomly accessed at time of program run
char fact[100][500]={"Jane Austen  had a knack for brewing her own beer. She used molasses to give her brews a sweeter taste.",
"Thomas Pynchon’s middle name is Ruggles.",
"Fredrik Backman was a blogger before A Man Called Ove became a bestseller sleeper hit.",
"451 degrees Fahrenheit isn’t actually the temperature at which paper burns. Bradbury was misinformed when he was choosing a title for Fahrenheit 451; that’s actually the temperature at which paper will combust.",
"Harper Lee was Truman Capote’s assistant when he was writing In Cold Blood. She was in charge of managing his 8,000 pages of notes, and interviewed townspeople who were too suspicious to tell him anything.",
"The Netflix adaptation of Julia Quinn’s Bridgerton is the most-watched series in the platform’s history. Over 82 million households have tuned in.",
"Suzanne Collins claims she came up with the idea for The Hunger Games when she was channel surfing, flicking between footage of the war in Iraq and reality TV.",
"Agatha Christie disappeared for nearly two weeks in 1926, after her first husband told her he wanted a divorce. Her car was found abandoned, 15,000 volunteers undertook a manhunt, and Sir Arthur Conan Doyle consulted a psychic. She was found in a hotel under an assumed name (borrowed from her husband’s mistress), and never offered any explanation, not even in her autobiography.",
"Daniel Defoe was terrible with money. He was in-and-out of debtors prison for most of his life, and died while (probably) in hiding from his creditors.",
"In her youth, Gillian Flynn worked odd jobs, including one where she was required to “dress up as a giant yogurt cone who wore a tuxedo”,",
"Hans Christian Andersen was a huge fan of Charles Dickens, but the admiration was not mutual. Dickens begrudgingly accepted Andersen’s request to sleep in his spare room when he came to Britain for a visit, but Andersen drastically overstayed his welcome. Upon his departure, Dickens taped up a note in the room that read: “Hans Christian Andersen slept in this room for five weeks – which seems to the family AGES!”,",
"When Stephen Hawking turned in his first draft of A Brief History Of Time, his publisher gave him some advice. They said that book sales would be halved for every mathematical equation that he included in the manuscript. Hawking went away and removed all equations bar one (E=MC2). The book went on to sell over 25 million copies.",
"James Joyce wrote with large blue pencils and crayons, laying on his stomach in bed, wearing a big white coat. This is likely attributable to his notoriously poor eyesight, for which he had twenty-five surgeries over the course of his life.",
"After a severe car accident, Stephen King‘s lawyer purchased the vehicle that hit him, “to prevent it from appearing on eBay”. The car was later crushed in a car yard, and King was reportedly disappointed that he didn’t get to smash it himself.",
"The Little Prince is the most-translated French book in the world, available in over 300 languages.",
"David Sedaris’s essay collection, Me Talk Pretty One Day, was all set to be adapted for the screen, with a completed script ready for production. Sedaris withdrew the rights after one of his siblings expressed concern about how their family would be portrayed.",
"Robert Louis Stevenson deliberately left out the definite article (“the”) from his title of Strange Case of Doctor Jekyll & Mr Hyde. Most editions now include it, to make the title grammatically correct.",
"Hanya Yanagihara, her editor, and her agent all expected that A Little Life “would not sell well”. It defied their expectations.",
"After publishing The Book Thief, Markus Zusak was able to support himself and his family on the royalties alone, for thirteen years. His next novel, Bridge Of Clay, is the only book he has published in his children’s lifetimes.",
"Aldous Huxley and C.S. Lewis died on the same day, 22 November 1963. Unfortunately, their deaths were overshadowed by the assassination of President John F. Kennedy.",
"Zen And The Art Of Motorcycle Maintenance holds the world record for being the most-often rejected book to go on to become a best-seller. Robert M. Pirsig received 121 rejections before a publisher agreed to buy his book.",
"Louisa May Alcott criticised Mark Twain for The Adventure Of Huckleberry Finn‘s crudeness. She said that if he couldn’t “think of something better to tell our pure-minded lads and lasses he had best stop writing for them”.",
"Edith Wharton’s father’s family was very wealthy and influential. Their surname was Jones, and it is said that this is where we get the saying “to keep up with the Joneses”.",
"Paulo Coelho wrote The Alchemist in just two weeks. He said he was able to get it down on paper quickly because the book was “already written in his soul”.",
"Kazuo Ishiguro is a “great admirer of Bob Dylan”, who won the Nobel Prize the year before he did.",
"Tayari Jones had the idea for An American Marriage when she was eavesdropping on a nearby couple in a shopping mall. She told The Paris Review: “I overheard a young couple arguing in the mall in Atlanta. The woman, who was splendidly dressed, and the man—he looked okay. But she looked great! And she said to him, “You know you wouldn’t have waited on me for seven years.” And he shot back, “This shit wouldn’t have happened to you in the first place.” And I was like, You know, I don’t know him, but I know she’s probably right.”",
"William Faulkner wrote As I Lay Dying over the course of six weeks, between midnight and 4AM, while working at a power plant. He said that he did not change a single word of the draft between completion and publication.",
"Andre Aciman was raised in a multi-lingual household, speaking predominantly French. Family members also spoke Italian, Greek, Ladino (Old Spanish), and Arabic.",
"The Call Of The Wild was inspired by Jack London’s own extended stay in the Klondike (where, he said, he “found himself”). He was forced to leave when he developed scurvy, as a result of the lack of fresh produce available in the Arctic in winter months.",
"Despite the anti-war and anti-capitalist themes of Catch-22, Joseph Heller spoke positively of his own time in the army during World War II, and said that he “never had a bad officer” during his time of a bombardier.",
"J.D. Salinger became a vegetarian after his father tried to pressure him to enter the meat-import business, and he spent a short time working in slaughterhouses in Vienna and Poland.",
"Toni Morrison wrote her Masters thesis on “Virginia Woolf’s and William Faulkner’s treatment of the alienated”.",
"Terry Pratchett’s signature fashion style was “large black hats… more that of urban cowboy than city gent”.","",
"Brad Pitt optioned the film rights for The Curious Incident Of The Dog In The Night-Time. A writer was attached to the project back in 2011, but as of 2021 production has not commenced.",
"Protesting the Government of Portugal’s decidedly negative reaction to his book The Gospel Of Jesus Christ, José Saramago left his home country and lived the rest of his life in exile on the Spanish island of Lanzarote.",
"Anaïs Nin wrote her erotic short stories – published posthumously in the collection Delta Of Venus – for the “personal use” of a “private collector”. The collector paid her a dollar a page, and told her to stick to the pornography, “no analysis, no philosophy”.",
"John Green foolishly promised to personally sign every pre-ordered copy of The Fault In Our Stars. He ended up having to sign every single copy of the first print run. He even polled the public as to what colour Sharpie he should use, and divvied up the 150,000 copies according to the proportion of the vote that each colour received.",
"Today, Bram Stoker is best known as the author of Dracula, but during his lifetime he was only known as the “personal assistant of actor Sir Henry Irving and business manager of the Lyceum Theatre, which Irving owned”. He also (probably) died of syphilis.",
"Veronica Roth wrote her debut novel, Divergent, while on winter break from her studies at Northwestern. She sold the book before graduation, and film rights sold before the book’s release.",
"Alice Walker coined the term “womanist”, in 1983. She intended it to mean simply “a black feminist or a feminist of colour”.",
"V.C. Andrews insisted (even after her death, via a surviving relative) that Flowers In The Attic was based on a true story. She claimed that she developed a crush on her doctor, who – along with his siblings – had been locked away for 6 years to preserve his family’s wealth. This claim has never been verified, and is widely disputed.",
"George R.R. Martin has said that comic book legend Stan Lee is “the greatest literary influence on [him], even more than Shakespeare or Tolkien”.",
"Toni Morrison was born Chloe Ardelia Wofford. She adopted the name Toni for her saint – Anthony – at age 12, after converting to Catholicism. Sadly, she came to regret using a pen name. She worried that it made her sound “like a teenager” and it she felt “ruined” by it. Still, her closest friends and family continued to call her Chloe until her death, and the pseudonym allowed her to keep her professional and personal lives separate.",
"Stephen Chbosky not only wrote but also directed the film adaptation of his young adult novel The Perks Of Being A Wallflower. It premiered at the Toronto Film Festival, and received a standing ovation.",
"Anita Loos was Hollywood’s first salaried screenwriter.",
"Thriller author Paula Hawkins has written romantic comedies under the name Amy Silver.",
"Though Nora Ephron was “culturally and emotionally Jewish”, she said that she was not religious. While promoting her final film before her death (Julie & Julia, based on Julie Powell’s blog and memoir of the same name), Ephron said “You can never have too much butter – that is my belief. If I have a religion, that’s it.”",
"John Steinbeck’s wife was the one who came up with the title for The Grapes Of Wrath.",
"Margaret Atwood says that her spelling is terrible.",
"Liane Moriarty wrote season two of the mini-series adaptation of her novel Big Little Lies with Meryl Streep in mind specifically for the new character Mary Louise. Streep didn’t even read the script before agreeing to sign on for the role.",
"Italo Calvino’s mother chose his first name to commemorate his Italian heritage (he was born in Cuba). However, as the family moved back to Italy while Calvino was still quite young, he effectively grew up with the same name as his country, which he thought sounded “belligerently nationalist”.",
"Douglas Adams claimed that the concept and title of The Hitchhiker’s Guide To The Galaxy were inspired by a bender. He was hitchhiking around Europe and one night, lying drunk in a field (if I had a dollar), he got to thinking about his mate’s copy of The Hitchhiker’s Guide To Europe and mused that there should be a version written for the galaxy.",
"Cormac McCarthy wrote on the same typewriter for over 50 years. It later sold for $250,000.",
"When Ernest Hemingway’s favourite bar was scheduled for demolition, he reportedly tore a urinal from the wall in the men’s room and took it for his own, saying that he had “pissed so much money into it” that it was his by rights.",
"William Golding’s manuscript of Lord Of The Flies was initially rejected by his eventual publisher, Faber, with their in-house professional reader calling it an “absurd and uninteresting fantasy about the explosion of an atomic bomb on the colonies and a group of children who land in the jungle near New Guinea. Rubbish and dull. Pointless”.",
"Australian scientists were such great fans of Andy Weir’s science-fiction novel The Martian that they named a new species of bush tomato after the main character: Solanum watneyi.",
"Samuel Beckett completed the final edits on his novel Murphy from a Parisian hospital bed. He’d been stabbed after declining an offer of companionship from a notorious French pimp (who went by the street name Prudent). James Joyce paid for Beckett’s medical care.",
"Despite reaching the peak of international literary fame, Elena Ferrante has remained anonymous for nearly two decades. She has said in (rare) interviews that anonymity is a pre-condition of her work.",
"Sally Rooney was the star of her university debate club, and was top debater at the European University Debating Championships in 2013.",
"Jack Kerouac didn’t learn to drive until he was 34 years old, and he never held a formal driver’s license.",
"Gulliver’s Travels is the most-widely-held book of Irish literature in the world’s libraries.',",
"Ayn Rand dedicated her novel Atlas Shrugged to her husband, and her lover – two different men! In her author bio, she added that her husband (Frank O’Connor) had the values of character she sought in a man, while her lover (Nathaniel Branden) was her “intellectual heir”, an ideal reader with as rational and independent a mind as she could conceive of, whom she met through a fan letter he sent her.",
"Victor Hugo really struggled with procrastination. While writing The Hunchback Of Notre Dame, he had his servants take away all of his clothes so that he wouldn’t be tempted to go out during the day when he was supposed to be working, effectively forcing him to write in the nude.",
"In an essay, Gone Girl author Gillian Flynn admitted to sadistic childhood impulses like “stunning ants and feeding them to spiders”.",
"Travel writer Bill Bryson has been eligible for British citizenship, but avoided it for most of his life, claiming that he was “too cowardly” to take the citizenship test. When he eventually worked up the courage, he passed.",
"Jennifer Egan has said that her book A Visit From The Goon Squad was inspired by two main sources: Proust’s In Search of Lost Time, and HBO’s The Sopranos.",
"The mathematics textbook that Charles Ludtwidge Dodgson (Lewis Carroll) used in school has survived the intervening years intact. An inscription in the front, written in Latin, translates to: “This book belongs to Charles Lutwidge Dodgson: hands off!”",
"Neil Gaiman and musician Tori Amos are very close friends; he is godfather to her daughter, and they have referenced each other in their work often.",
"Chimamanda Ngozi Adichie’s TED talk, The Danger Of A Single Story, is one of the top ten most-viewed TED Talks of all time with more than fifteen million views.",
"James Joyce loved the work of playwright Henrik Ibsen so much, he learned Norwegian in order to send Ibsen a letter in his native tongue.",
"F. Scott Fitzgerald was named for Francis Scott Key, who wrote the lyrics for The Star Spangled Banner.",
"John Steinbeck wrote a werewolf novel. It’s called Murder At Full Moon, and it has never been published. A copy of the manuscript is held in the archives of the University of Texas. It will enter the public domain in 2043.",
"A French soldier claimed that a copy of Rudyard Kipling’s Kim saved his life. He had the book in his pocket when he was shot, and said that the bullet stopped “twenty pages from his heart”.",
"Mark Twain was once the next-door neighbour of Harriet Beecher Stowe.",
"Walt Whitman wrote a temperance novel, Franklin Evans, for the money. He admitted later that he was drunk when he wrote it.",
"The musical Cabaret is an adaptation of a play called I Am A Camera, which in turn is an adaptation of Christopher Isherwood’s book Goodbye To Berlin.",
"Aldous Huxley taught George Orwell’s French class at Eton College in 1917.",
"Gabriel García Márquez never sold the film rights to One Hundred Years Of Solitude, because “(t)hey would cast someone like Robert Redford and most of us do not have relatives who look like Robert Redford.”",
"Oscar Wilde’s last words were reportedly about the wallpaper in the room where he was confined to his sick bed, which he hated. He reportedly said something to the effect of “my wallpaper and I are fighting… one or other of us has got to go.”",
"On the eve of their marriage, Leo Tolstoy gave his wife-to-be his complete and unabridged diaries, detailing his sexual history (including his illegitimate child by a serf on his estate), and insisted she read them.",
"Harper Lee was Truman Capote’s assistant when he was writing In Cold Blood. She was in charge of managing his 8,000 pages of notes, and interviewed townspeople who were too suspicious to tell him anything.",
"The Netflix adaptation of Julia Quinn’s Bridgerton is the most-watched series in the platform’s history. Over 82 million households have tuned in.",
"Suzanne Collins claims she came up with the idea for The Hunger Games when she was channel surfing, flicking between footage of the war in Iraq and reality TV.",
"Agatha Christie disappeared for nearly two weeks in 1926, after her first husband told her he wanted a divorce. Her car was found abandoned, 15,000 volunteers undertook a manhunt, and Sir Arthur Conan Doyle consulted a psychic. She was found in a hotel under an assumed name (borrowed from her husband’s mistress), and never offered any explanation, not even in her autobiography.",
"Daniel Defoe was terrible with money. He was in-and-out of debtors prison for most of his life, and died while (probably) in hiding from his creditors.",
"In her youth, Gillian Flynn worked odd jobs, including one where she was required to “dress up as a giant yogurt cone who wore a tuxedo”,",
"Hans Christian Andersen was a huge fan of Charles Dickens, but the admiration was not mutual. Dickens begrudgingly accepted Andersen’s request to sleep in his spare room when he came to Britain for a visit, but Andersen drastically overstayed his welcome. Upon his departure, Dickens taped up a note in the room that read: “Hans Christian Andersen slept in this room for five weeks – which seems to the family AGES!”,",
"When Stephen Hawking turned in his first draft of A Brief History Of Time, his publisher gave him some advice. They said that book sales would be halved for every mathematical equation that he included in the manuscript. Hawking went away and removed all equations bar one (E=MC2). The book went on to sell over 25 million copies.",
"James Joyce wrote with large blue pencils and crayons, laying on his stomach in bed, wearing a big white coat. This is likely attributable to his notoriously poor eyesight, for which he had twenty-five surgeries over the course of his life.",
"After a severe car accident, Stephen King‘s lawyer purchased the vehicle that hit him, “to prevent it from appearing on eBay”. The car was later crushed in a car yard, and King was reportedly disappointed that he didn’t get to smash it himself.",
"The Little Prince is the most-translated French book in the world, available in over 300 languages.",
"David Sedaris’s essay collection, Me Talk Pretty One Day, was all set to be adapted for the screen, with a completed script ready for production. Sedaris withdrew the rights after one of his siblings expressed concern about how their family would be portrayed.",
"Robert Louis Stevenson deliberately left out the definite article (“the”) from his title of Strange Case of Doctor Jekyll & Mr Hyde. Most editions now include it, to make the title grammatically correct.",
"Hanya Yanagihara, her editor, and her agent all expected that A Little Life “would not sell well”. It defied their expectations.",
"After publishing The Book Thief, Markus Zusak was able to support himself and his family on the royalties alone, for thirteen years. His next novel, Bridge Of Clay, is the only book he has published in his children’s lifetimes.",
"Aldous Huxley and C.S. Lewis died on the same day, 22 November 1963. Unfortunately, their deaths were overshadowed by the assassination of President John F. Kennedy.",
"Zen And The Art Of Motorcycle Maintenance holds the world record for being the most-often rejected book to go on to become a best-seller. Robert M. Pirsig received 121 rejections before a publisher agreed to buy his book.",
"Louisa May Alcott criticised Mark Twain for The Adventure Of Huckleberry Finn‘s crudeness. She said that if he couldn’t “think of something better to tell our pure-minded lads and lasses he had best stop writing for them”.",
"Edith Wharton’s father’s family was very wealthy and influential. Their surname was Jones, and it is said that this is where we get the saying “to keep up with the Joneses”.",
"The musical Cabaret is an adaptation of a play called I Am A Camera, which in turn is an adaptation of Christopher Isherwood’s book Goodbye To Berlin."}; 

printf("\n\t\t\t\t\t\tFun Fact!!");
printf("\n");

time_t t;
    srand((unsigned)time(&t));  //code for choosing a fact randomly from the above
    puts(fact[(rand()%100)]);
    printf("\n");
    printf("\n");

    printf("\nWelcome to TBR! ");
    printf("\nHere, we aim to create a community of fellow readaholics with a common love for reading! ");
     printf("\nWhether you are a newbie, or an avid bookworm, we have something for everyone! ");
     printf("\nSo, dive in our extensive questionnaire as we take you through the best possible filtration process to lead you to the books that are guaranteed to find a place in your TBR (To be read and re-read!) list!");

    //inventory
  struct book inventory[150]={{"And Then There Were None","Agatha Christie",0,2},  //storing each book in the format, book name, author, genre id, author id
  {"Sherlock Holmes Series","Sir Arthur Conan Doyle",0,6},
  {"Rebecca","Daphne du Maurier",0,-1},
  {"Murder on the Orient Express","Agatha Christie",0,2},
  {"Gone Girl","Gillian Flynn",0,-1},
  {"Frankenstein","Mary Shelley",1,-1},
  {"The Invisible Man","H.G.Wells",1,-1},
  {"The Hitchhiker’s Guide to the Galaxy","Douglas Adams",1,-1},
  {"1984","George Orwell",1,-1},
  {"Neuromancer","William Gibson",1,-1},
  {"Wolf Hall","Hilary Mantel",2,-1},
  {"The Book Thief","Markus Zusak",2,-1},
  {"All the Light We Cannot See","Anthony Doerr",2,-1},
  {"Sita-Warrior of Mithila","Amish Tripathi",2,-1},
  {"The Palace of Illusions","Chitra Banerjee Divakaruni",2,-1},
  {"Pride and Prejudice","Jane Austen",3,10},
  {"Jane Eyre","Charlotte Bronte",3,-1},
  {"Gone With The Wind","Margaret Mitchell",3,-1},
  {"The Notebook","Nicholas Sparks",3,-1},
  {"2 States","Chetan Bhagat",3,1},
  {"Harry Potter Series","J.K.Rowling",4,5},
  {"The Hunger Games Series","Suzanne Collins",4,-1},
  {"Little Women","Louisa May Alcott",4,-1},
  {"The Fault in Our Stars","John Green",4,-1},
  {"The Catcher in the Rye","J.D.Salinger",4,-1},
  {"Alice’s Adventures in Wonderland","Lewis Caroll",5,-1},
  {"Stardust","Neil Gaiman",5,-1},
  {"The Arabian Nights","Anonymous",5,-1},
  {"The Chronicles of Narnia","C.S.Lewis",5,-1},
  {"The Lord of the Rings","John Ronald Reuel Tolkien",5,-1},
  {"Crime and Punishment","Fyodor Dostoevsky",6,-1},
  {"The ABC Murders","Agatha Christie",6,2},
  {"The Girl on the Train","Paula Hawkins",6,-1},
  {"Angels and Demons","Dan Brown",6,-1},
  {"The Silent Patient","Alex Michaelides",6,-1},
  {"Little Red Riding Hood","Anonymous",7,-1},
  {"Hansel and Gretel","Anonymous",7,-1},
  {"Cinderella","Anonymous",7,-1},
  {"Snow White and the Seven Dwarfs","Anonymous",7,-1},
  {"Rapunzel","Anonymous",7,-1},
  {"Salem’s Lot","Stephen King",8,-1},
  {"Those Across the River","Christopher Buehlman",8,-1},
  {"The Exorcist","William Peter Blattey",8,-1},
  {"The Ruins","Scott Smith",8,-1},
  {"Goosebumps","R.L.Stine",8,-1},
  {"The Daughter From a Wishing Tree","Sudha Murty",9,-1},
  {"Mahayoddha Kalki: Sword of Shiva","Kevin Missal ",9,-1},
  {"The Secret of the Nagas","Amish Tripathi",9,-1},
  {"Aesop’s Fables","Aesop",9,-1},
  {"Panchatantra","Vishnu Sharma",9,-1},
  {"The Alchemist","Paulo Coelho",10,4},
  {"The Prophet","Kahlil Gibran",10,-1},
  {"The Five People You Meet in Heaven","Mitch Albom",10,-1},
  {"Siddhartha","Hermann Hesse",10,-1},
  {"The Rumi Collection","Rumi",10,-1},
  {"The Murder of Roger Ackroyd","Agatha Christie",11,2},
  {"Next in Line","Jeffrey Archer",11,-1},
  {"The Woman in the Window","A.J.Finn",11,-1},
  {"The Thursday Murder Club","Richard Osman",11,-1},
  {"The Girl in room 105","Chetan Bhagat",11,1},
  {"Dead Mountain: The Untold True Story of the Dyatlov Pass Incident","Donnie Eichar",12,-1},
  {"The Murder of King Tut","James Patterson",12,-1},
  {"The Trial of Lizzie Borden","Cara Robertson",12,-1},
  {"The Art of Vanishing: A Memoir of Wanderlust","Laura Smith",12,-1},
  {"Unsolved Historical Mysteries (Unsolved Mystery Files)","Allison Lassieur",12,-1},
  {"The Devil in the White City","Erik Larson",13,-1},
  {"Dead Wake: The Last Crossing of the Lusitania","Erik Larson",13,-1},
  {"Killers of the Flower Moon","David Grann",13,-1},
  {"Into the Storm: Two Ships, a Deadly Hurricane, and an Epic Battle for Survival","Tristram Korten",13,-1},
  {"One Minute to Midnight","Michael Dobbs",13,-1},
  {"Men, Women, and Chain Saws: Gender in the Modern Horror Film","Carol J. Clover",14,-1},
  {"Paperbacks from Hell: The Twisted History of '70s and '80s Horror Fiction","Grady Hendrix",14,-1},
  {"Danse Macabre","Stephen King",14,-1},
  {"Ghostland: An American History in Haunted Places","Colin Dickey",14,-1},
  {"The Haunted: One Family's Nightmare","Robert Curran",14,-1},
  {"The Gods of Olympus: A History","Barbara Graziosi",15,-1},
  {"Myth = Mithya: Decoding Hindu Mythology","Devdutt Pattanaik",15,-1},
 {"Ramayana","Valmiki",15,-1},
 {"Mahabharata","Ved Vyasa",15,-1},
 {"The Jataka Tales","",15,-1},
 {"Tuesdays With Morrie","Mitch Albom",16,-1},
 {"Classic Ruskin Bond Vol.2","Ruskin Bond",16,0},
 {"The Story of all My Days","R.K.Narayan",16,-1},
 {"Three Thousand Stitches","Sudha Murty",16,-1},
 {"Love Among The Bookshelves","Ruskin Bond",16,0},
  {"Simon & Schuster Steve Jobs","Walter Isaacson",17,-1},
  {"Greenblatt, Stephen Will in the World: How Shakespeare Became Shakespeare","Stephen Greenblatt",17,-1},
  {" Playing it My Way","Sachin Tendulkar",17,-1},
  {"Wings of Fire","APJ Abdul Kalam & Arun Tiwari",17,-1},
  {"Autobiography of a Yogi","Paramahansa Yogananda",17,-1},
{"The Bhagavad Gita","Vyasa",18,-1},
{"Life’s Amazing Secrets","Gaur Gopal Das",18,-1},
{"Happiness Unlimited","BK Shivani",18,-1},
{"Think like a Monk","Jay Shetty",8,-1},
{"Man’s Search for Meaning","Viktor Frankl",18,-1},
{"The Argumentative Indian","Amartya Sen",19,-1},
{"India’s Struggle for Independence","Bipan Chandra",19,-1},
{"India’s Ancient Past","Ram Sharan Sharma",19,-1},
{"The Last Mughal","William Dalrymple",19,-1},
{"The Guns of August","Barbara W. Tuchman",19,-1},
{"Rich Dad Poor Dad","Robert Kiyosaki",20,-1},
{"The Intelligent Investor","Benjamin Graham",20,-1},
{"Think  & Grow Rich","Napoleon Hill",20,-1},
{"The Total Money Makeover: A Proven Plan for Financial Fitness","Dave Ramsey",20,-1},
{"I Will Teach You To Be Rich","Ramit Seth",20,-1},
{"The Soul of a New Machine","Tracy Kidder",21,-1},
{"A Brief History of Time: From the Big Bang to Black Holes","Stephen Hawking",21,-1},
{"Superintelligence: Paths, Dangers, Strategies","Nick Bostrom",21,-1},
{"Cosmos","Carl Sagan",21,-1},
{"Being Supernatural : How Common People are Doing the Uncommon","Dr. Joe Dispenza",21,9},
{"In Cold Blood","Truman Capote",22,-1},
{"The Stranger Beside Me"," Ann Rule",22,-1},
{"I'll Be Gone in the Dark: One Woman's Obsessive Search for the Golden State Killer","Michelle McNamara",22,-1},
{"Queens of Crime: True Stories of Women Criminals from India","Sushant Singh and Kulpreet Yadav",22,-1},
{"Dongri to Dubai: Six Decades of the Mumbai Mafia","Hussain Zaidi",22,-1},
{"8 Rules of Love: How to Find It, Keep It, and Let It Go","Jay Shetty",23,8},
{"The Self Love Experiment","Shannon Kaiser",23,-1},
{"Being Love","BK Shivani",23,-1},
{"The Five Love Languages: How to Express Heartfelt Commitment to Your Mate","Gary Chapman",23,-1},
{"If The Buddha Dated","Charlotte Kasl",23,-1},
{"Inner Engineering: A Yogi's Guide to Joy","Sadhguru",24,-1},
{"The Secret","Rhonda Byrne",24,-1},
{"The Monk Who Sold his Ferrari","Robin Sharma",24,7},
{"The Complete Book of Yoga","Swami Vivekananda",24,-1},
{"Celebrating Silence","Sri Sri Ravi Shankar",24,-1},
{"The Richest Man in Babylon","George S. Clason",25,-1},
{"A Random Walk Down Wall Street","Burton Gordon Malkie",25,-1},
{"The One-Page Financial Plan","Carl Richards",25,-1},
{"The Automatic Millionaire","David Bach",25,-1},
{"The Psychology of Money","Morgan Housel",25,-1},
{"Atomic Habits","James Clear",26,-1},
{"Ikigai","Francesc Miralles","Hector Garcia",26,-1},
{"The Subtle Art of Not Giving a F*ck","Mark Manson",26,-1},
{"How to Win Friends and Influence People","Dale Carnegie",26,-1},
{"The 7 Habits of Highly Effective People","Stephen R. Covey",26,-1},
{"Famous Five series","Enid Blyton",4,3},
{"Secret Seven series","Enid Blyton",4,3},
{"Noddy","Enid Blyton",5,3},
{"Malory Towers Series","Enid Blyton",4,3},
{"The Magic Faraway Tree","Enid Blyton",7,3},
{"David Copperfield","Charles Dickens",4,11},
{"Oliver Twist","Charles Dickens",4,11},
{"Great Expectations","Charles Dickens",4,11},
{"The Pickwick Papers","Charles Dickens",4,11},
{"A Christmas Carol","Charles Dickens",4,11},
{"Romeo and Juliet","Shakespeare",3,12},
{"Julius Caesar","Shakespeare",2,12},
{"The Merchant of Venice","Shakespeare",3,12},
{"The Tempest","Shakespeare",3,12},
{"Macbeth","Shakespeare",3,12}};
//entering genre

int genre[3];
    //arrays and varaibles list
    int sgBooks[150];//stores index of books selected on the basis of subgenre
    int authBooks[150];//stores index of books selected on the basis of author
    int starBooks[150];//stores index of books passing all the filters
    int nSg=0, nAuth=0, nStar=0;

    //considering number of books thrown to be 15; stores indices of books to be thrown
    int bChoice[10];//stores choice as 0 or 1
    int probAuth[10];//stores author code of authors of the selected books while book throwing
    int probSg[10];//stores author code of authors of the selected books while book throwing
    int prbsg;
    int prbauth;
    int throwBooks[]={0,1,13,15,20,37,44,49,51,81};

    //loop variables
    int i,j,k;
    int c;
    int categ;

    //Enter category (level)
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("           \t\t\t\t\t**************          ");
    printf("\n");
    printf("\n");
    printf("Select the category:\nPress\n0 for Beginner (completely new to reading books)\n1 for Intermediate (have read 1 to  books)\n2 for Advanced (have read upto 15 books)\n3 for Bookworm (have read more than 15 books)\n");
    printf("\nEnter your response:  ");
    scanf("%d",&categ);
    printf("\n");
    printf("\n");
    printf("Select your desired genre(s):\n");
    printf("Press 1 to select, else 0...\n");
    printf("\n");
    printf("Fiction : ");
    scanf("%d",&genre[0]);
    printf("Non-fiction : ");
    scanf("%d",&genre[1]);
    printf("Self-help : ");
    scanf("%d",&genre[2]);
    printf("\n");
    
    //entering sub genre choices
    char subgenre[27][30]={"Mystery",
    "Science Fiction",
    "Historical Fiction",
    "Romance",
    "Young Adult",
    "Fantasy",
    "Thriller",
    "Fairy Tale",
    "Horror",
    "Mythology",
    "Spirituality",
    "Crime",
    "Mystery",
    "Thriller",
    "Horror",
    "Mythology",
    "Memoir",
    "Biography & Autobiography",
    "Spirituality",
    "History",
    "Finance",
    "Science & Technology",
    "Crime","Romance",
    "Spirituality",
    "Finance",
    "Self Help Miscellaneous"};
    int sub[27];
   printf("\nSelect the subgenres of your preference:  ");
   printf("\n");
   if(genre[0]==1)
   {
     printf("\nDisplaying subgenres for Fiction Genre:   ");
     printf("\n");
   for(i=0;i<12;i++)
   {
     printf("%s  : ",subgenre[i]);
     scanf("%d",&sub[i]);
    }
     }
      if(genre[1]==1)
   {
     printf("Displaying subgenres for Non-Fiction Genre:   ");
     printf("\n");
   for(i=12;i<23;i++)
   {
     printf("%s  : ",subgenre[i]);
     scanf("%d",&sub[i]);
     }
     }
     if(genre[2]==1)
     { printf("\nDisplaying subgenres for Self-Help Genre:   ");
     printf("\n");
      for(i=23;i<27;i++)
   {
     printf("%s  : ",subgenre[i]);
     scanf("%d",&sub[i]);
     }
     }
      //input author preferences
      int authChoice[13];
    char authors[13][35]={"Ruskin Bond"
    ,"Chetan Bhagat"
    ,"Agatha Christie"
    ,"Enid Blyton"
    ,"Paulo Coehlo"
    ,"JK Rowling"
    ,"Arthur Conan Doyle"
    ,"Robin Sharma"
    ,"Jay Shetty"
    ,"Dr. Joe Dispenza"
    ,"Jane Austen"
    ,"Charles Dickens"
    ,"William Shakespeare"};
    printf("\n");
    printf("\n");
    printf("Select the authors whose works you enjoy reading:\n");
    printf("Press 1 to select, else 0...\n");
    printf("\n");
    for (i=0;i<13;i++)
    {
        printf("%s : ",authors[i]);
        scanf("%d",&authChoice[i]);
    }
  printf("\n");
  printf("  		\t\t\t\t\t*****A SPECIAL SECTION AWAITS YOU!!*****");
  printf("\n");
  printf("\nSelect from the given set of books, the books you've enjoyed reading or would love to read. Based on your choices, we'll give some special recommendations to you!");
  printf("\n");
  printf("\nPress 1 to select, else 0...");
  printf("\n");
  printf("\n");
  for(i=0;i<10;i++)
  {
    printf("%s : ",inventory[throwBooks[i]].name);
    scanf("%d",&bChoice[i]);
    }
    //printing books acc. to genre & subgenre
    printf("\n");
    printf("\n");
    printf("Be prepared!");
    printf("\n");
    printf("A special TBR list awaits you!");
    printf("\n");
    printf("Books on the Basis of Selected Genre & Subgenre!");
    printf("\n");
    printf("\n");
    if (genre[0]==1){
        printf("\t\t\t\t\t\t\t\t***Genre : Fiction***\n\n");
        for (i=0;i<12;i++)
        {
            if (sub[i]==1)
            {
                printf("\t\t\t\t\t\t\t\tSubgenre : %s\n",subgenre[i]);
                for (j=0;j<150;j++)
                {
                    if (inventory[j].g==i)
                    {
                        printf("Book name : %s\n", inventory[j].name);
                        printf("Author : %s\n", inventory[j].author);
                        printf("\n");
                        sgBooks[nSg]=j;
                        nSg++;
                    }
                }
            }
        }
    }
    printf("\n");
    printf("\n");

    if (genre[1]==1)
    {
        printf("\t\t\t\t\t\t\t\t***Genre : Non-fiction***\n");
        for (i=12;i<23;i++)
        {
            if (sub[i]==1)
            {
                printf("\t\t\t\t\t\t\t\tSubgenre : %s\n",subgenre[i]);
                for (j=0;j<150;j++)
                {
                    if (inventory[j].g==i)
                    {
                        printf("Book name : %s\n", inventory[j].name);
                        printf("Author : %s\n", inventory[j].author);
                        printf("\n");
                        sgBooks[nSg]=j;
                        nSg++;
                    }
                }
            }
        }
    }
    printf("\n");
    printf("\n");

    if (genre[2]==1)
    {
        printf("\t\t\t\t\t\t\t\t***Genre : Self-Help***\n");
        for (i=23;i<27;i++)
        {
            if (sub[i]==1)
            {
                printf("\t\t\t\t\t\t\t\tSubgenre : %s\n",subgenre[i]);
                for (j=0;j<150;j++)
                {
                    if (inventory[j].g==i)
                    {
                        printf("Book name : %s\n", inventory[j].name);
                        printf("Author : %s\n", inventory[j].author);
                        printf("\n");
                        sgBooks[nSg]=j;
                        nSg++;
                    }
                }
            }
        }
    }

    //Printing books according to author
    printf("Books on the Basis of Selected Authors:\n");
    for (i=0;i<13;i++)
    {
        if (authChoice[i]==1)
        {
            printf("\t\t\t\t\t\t\t\tAuthor : %s\n",authors[i]);
            printf("\n");
            for (j=0;j<150;j++)
            {
                if (inventory[j].a==i)
                {
                    printf("Book : %s\n", inventory[j].name);
                    printf("Genre : %s\n", subgenre[inventory[j].g]);
                    printf("\n");
                    authBooks[nAuth]=j;
                    nAuth++;
                }
            }
            printf("\n");
        }
    }

    //printing books matching both filters
    for (i=0;i<nSg;i++)
    {
        for (j=0;j<nAuth;j++)
        {
            if (authBooks[j]==sgBooks[i])
            {
                starBooks[nStar]=authBooks[j];
                nStar++;
                break;
            }
            j++;

        }
        i++;
    }

for (i=0;i<nStar;i++)
    {
        if(i==0)
        {
            printf("\n");
    printf("Books passing all the filters are:\n");
    printf("\n");

        }
        printf("Book name : %s\n",inventory[starBooks[i]].name);
        printf("Author : %s\n",inventory[starBooks[i]].author);
        printf("Genre : %s\n",subgenre[inventory[starBooks[i]].g]);
        printf("\n");
    }

     prbsg=0;
     prbauth=0;
     
    //printing books on the basis of books selected while book throwing
   for(i=0;i<10;i++)
   {
       if(bChoice[i]==1)
       {
           probSg[prbsg]=inventory[throwBooks[i]].g;
           prbsg=prbsg+1;
           probAuth[prbauth]=inventory[throwBooks[i]].a;
           prbauth=prbauth+1;
           }
       }
       printf("\n");
       printf("\t\t\t\t\t\t\t\t**And Now The Most Exciting Part!");
       printf("\n");
       printf(" Our Special Recommendations!!: ");
       printf("\n");
       for(i=0;i<prbsg;i++)
       { c=0;
           if(sub[probSg[i]]==1)
               {
                   c=1;
            }

           if(c==0)
           {
               for (k=0;k<150;k++)
            {
                if ((inventory[k].g)==probSg[i])
                {
                    printf("Book name : %s\n", inventory[k].name);
                    printf("Author : %s\n", inventory[k].author);
                    printf("Genre : %s\n",subgenre[inventory[k].g]);
                    printf("\n");
                }
            }
           }
       }

       for(i=0;i<prbauth;i++)
       { c=0;
               if(authChoice[probAuth[i]]==1)
               {
                   c=1;

               }

           if(c==0)
           {
               for (j=0;j<150;j++)
            {
                if ((inventory[j].a)==probAuth[i])
                {
                    printf("Book name : %s\n", inventory[j].name);
                    printf("Author : %s\n",inventory[j].author);
                    printf("Genre : %s\n",subgenre[inventory[j].g]);
                    printf("\n");
                }
            }
           }



     return 0;
           }
       }





