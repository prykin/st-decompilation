FUN_004907e0:
004907E0  55                        PUSH EBP
004907E1  8B EC                     MOV EBP,ESP
004907E3  83 EC 10                  SUB ESP,0x10
004907E6  56                        PUSH ESI
004907E7  8B F1                     MOV ESI,ECX
004907E9  66 C7 45 FA 00 00         MOV word ptr [EBP + -0x6],0x0
004907EF  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
004907F3  66 8B 86 A6 02 00 00      MOV AX,word ptr [ESI + 0x2a6]
004907FA  51                        PUSH ECX
004907FB  66 89 45 F8               MOV word ptr [EBP + -0x8],AX
004907FF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00490802  66 8B 86 AA 02 00 00      MOV AX,word ptr [ESI + 0x2aa]
00490809  83 EC 08                  SUB ESP,0x8
0049080C  8B D4                     MOV EDX,ESP
0049080E  89 0A                     MOV dword ptr [EDX],ECX
00490810  8B CE                     MOV ECX,ESI
00490812  66 89 42 04               MOV word ptr [EDX + 0x4],AX
00490816  8D 55 F0                  LEA EDX,[EBP + -0x10]
00490819  52                        PUSH EDX
0049081A  E8 0D 2C F7 FF            CALL 0x0040342c
0049081F  8B 08                     MOV ECX,dword ptr [EAX]
00490821  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00490824  66 8B 48 04               MOV CX,word ptr [EAX + 0x4]
00490828  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0049082B  85 C0                     TEST EAX,EAX
0049082D  74 0B                     JZ 0x0049083a
0049082F  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
00490833  66 03 55 F8               ADD DX,word ptr [EBP + -0x8]
00490837  66 89 10                  MOV word ptr [EAX],DX
LAB_0049083a:
0049083A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0049083D  85 C0                     TEST EAX,EAX
0049083F  74 0B                     JZ 0x0049084c
00490841  66 8B 56 43               MOV DX,word ptr [ESI + 0x43]
00490845  66 2B 55 FA               SUB DX,word ptr [EBP + -0x6]
00490849  66 89 10                  MOV word ptr [EAX],DX
LAB_0049084c:
0049084C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0049084F  85 C0                     TEST EAX,EAX
00490851  74 0A                     JZ 0x0049085d
00490853  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
00490857  66 03 D1                  ADD DX,CX
0049085A  66 89 10                  MOV word ptr [EAX],DX
LAB_0049085d:
0049085D  5E                        POP ESI
0049085E  8B E5                     MOV ESP,EBP
00490860  5D                        POP EBP
00490861  C2 0C 00                  RET 0xc
