# UPN_projekt
UPN projekt odpiranje strešnega okna.

Naloga:
Strešno okno: Dvosmerni cilinder odpira ali zapira okno (vrtenje motorja naprej/nazaj preko releja). S tipko A aktiviramo zapiranje okna, s tipko B odprianje do polovice in s tipko C odpiranje okna do konca. Lego okna zaznavajo senzorji Kz, Kp in Ko (uporabite stikala). Če je okno odprto, naj signalizira rdeča LED dioda. 

**VIDEO:**
-


**AVTORJI:** <br />
-
- Tian Košir <br />
- Nik Šerak 


**KOSOVNICA:**
-
- Arduino UNO
- tipke 6X
- LED dioda 3X
- upor 1K 9X

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


**BREADBOARD:**
-


**SHEMA:**
-


**KOMENTAR:**
-
Naloga se nama je zdela v redu, naučila sva se izdelovati repozitorij na GITHUB-u in ga tudi dobro urediti. Za izdelovanje vezave nama je prišlo prav znanje iz preteklih vaj. Nekaj problemov sva imela s slabim stikom žic, drugače pa sva z izdelavo zadovoljna.
