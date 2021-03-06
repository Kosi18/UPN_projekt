# UPN_projekt
UPN projekt odpiranje strešnega okna.

Naloga:
Strešno okno: Dvosmerni cilinder odpira ali zapira okno (vrtenje motorja naprej/nazaj preko releja). S tipko A aktiviramo zapiranje okna, s tipko B odprianje do polovice in s tipko C odpiranje okna do konca. Lego okna zaznavajo senzorji Kz, Kp in Ko (uporabite stikala). Če je okno odprto, naj signalizira rdeča LED dioda. 

**AVTORJI:** <br />
-
- Tian Košir <br />
- Nik Šerak 

**SLIKA:**
-
![upn_arduino](https://user-images.githubusercontent.com/81773870/168566014-0947f9c1-e8e5-4175-a556-dc3c78b3b1c1.jpeg)


**VIDEO:**
-
https://user-images.githubusercontent.com/81773870/172577053-032eaee7-d144-486b-8a89-7ea761cc0131.mp4

**KOSOVNICA:**
-
- Arduino UNO
- 6X tipke 
- 3X LED dioda
- 9X upor 1K 

**PRIREDBENI SEZNAM:**
-
**VHODI:**
| Oznaka v načrtu  | Naslov operanda | Vrsta kontakta  | Pomen |
| ------------- | ------------- | ------------- | ------------- |
| odpre  | X0| NO  | okno se odpira  |
| zapre  | X1| NO   | okno s zapira  |
| polovica  | X2  | NO    | okno se odpre do polovice  |
| senzor odprt  | X3 | NO    | okno je odprto  |
| senzor zaprt  | X4  | NO    | okno je zaprto  |
| senzor polovica  | X5  | NO    | okno je odprto do polovice  |

**IZHODI:**
| Oznaka v načrtu | Naslov operanda | Aktiven pri  | Pomen |
| ------------- | ------------- | ------------- | ------------- |
| MOTOR  | Y0  | 1  | motor odpira okno  |
| MOTOR  | Y1  | 1  | motor zapira okno  |
| LED  | Y2  | 1  | okno je odprto  |


**BREADBOARD:**
-
![breadboard](https://user-images.githubusercontent.com/81773870/169004270-a67fd588-2fab-4737-9566-4691f17a72ba.png)


**SHEMA:**
-
![shema_okno](https://user-images.githubusercontent.com/81773870/169010809-0ff58e15-b928-430f-af84-ac2058a5c2b6.png)


**KOMENTAR:**
-
Naloga se nama je zdela v redu, naučila sva se izdelovati repozitorij na GITHUB-u in ga tudi dobro urediti. Za izdelovanje vezave nama je prišlo prav znanje iz preteklih vaj. Nekaj problemov sva imela s slabim stikom žic, drugače pa sva z izdelavo zadovoljna.
