FUN_007456f0:
007456F0  55                        PUSH EBP
007456F1  8B EC                     MOV EBP,ESP
007456F3  6A FF                     PUSH -0x1
007456F5  68 40 10 7A 00            PUSH 0x7a1040
007456FA  68 64 D9 72 00            PUSH 0x72d964
007456FF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00745705  50                        PUSH EAX
00745706  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0074570D  83 C4 E8                  ADD ESP,-0x18
00745710  53                        PUSH EBX
00745711  56                        PUSH ESI
00745712  57                        PUSH EDI
00745713  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00745716  83 3D F4 74 85 00 00      CMP dword ptr [0x008574f4],0x0
0074571D  75 43                     JNZ 0x00745762
0074571F  6A 00                     PUSH 0x0
00745721  6A 00                     PUSH 0x0
00745723  6A 01                     PUSH 0x1
00745725  6A 00                     PUSH 0x0
00745727  FF 15 60 BC 85 00         CALL dword ptr [0x0085bc60]
0074572D  85 C0                     TEST EAX,EAX
0074572F  74 0C                     JZ 0x0074573d
00745731  C7 05 F4 74 85 00 01 00 00 00  MOV dword ptr [0x008574f4],0x1
0074573B  EB 25                     JMP 0x00745762
LAB_0074573d:
0074573D  6A 00                     PUSH 0x0
0074573F  6A 00                     PUSH 0x0
00745741  6A 01                     PUSH 0x1
00745743  6A 00                     PUSH 0x0
00745745  FF 15 10 BC 85 00         CALL dword ptr [0x0085bc10]
0074574B  85 C0                     TEST EAX,EAX
0074574D  74 0C                     JZ 0x0074575b
0074574F  C7 05 F4 74 85 00 02 00 00 00  MOV dword ptr [0x008574f4],0x2
00745759  EB 07                     JMP 0x00745762
LAB_0074575b:
0074575B  33 C0                     XOR EAX,EAX
0074575D  E9 0F 01 00 00            JMP 0x00745871
LAB_00745762:
00745762  83 3D F4 74 85 00 01      CMP dword ptr [0x008574f4],0x1
00745769  75 1B                     JNZ 0x00745786
0074576B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0074576E  50                        PUSH EAX
0074576F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00745772  51                        PUSH ECX
00745773  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00745776  52                        PUSH EDX
00745777  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074577A  50                        PUSH EAX
0074577B  FF 15 60 BC 85 00         CALL dword ptr [0x0085bc60]
00745781  E9 EB 00 00 00            JMP 0x00745871
LAB_00745786:
00745786  83 3D F4 74 85 00 02      CMP dword ptr [0x008574f4],0x2
0074578D  0F 85 DC 00 00 00         JNZ 0x0074586f
00745793  83 7D 18 00               CMP dword ptr [EBP + 0x18],0x0
00745797  75 09                     JNZ 0x007457a2
00745799  8B 0D 20 72 85 00         MOV ECX,dword ptr [0x00857220]
0074579F  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_007457a2:
007457A2  6A 00                     PUSH 0x0
007457A4  6A 00                     PUSH 0x0
007457A6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007457A9  52                        PUSH EDX
007457AA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007457AD  50                        PUSH EAX
007457AE  FF 15 10 BC 85 00         CALL dword ptr [0x0085bc10]
007457B4  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
007457B7  83 7D E4 00               CMP dword ptr [EBP + -0x1c],0x0
007457BB  75 07                     JNZ 0x007457c4
007457BD  33 C0                     XOR EAX,EAX
007457BF  E9 AD 00 00 00            JMP 0x00745871
LAB_007457c4:
007457C4  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
007457CB  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
007457CE  83 C0 03                  ADD EAX,0x3
007457D1  24 FC                     AND AL,0xfc
007457D3  E8 68 82 FE FF            CALL 0x0072da40
007457D8  89 65 D8                  MOV dword ptr [EBP + -0x28],ESP
007457DB  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
007457DE  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
007457E1  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
007457E4  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
007457EB  EB 17                     JMP 0x00745804
LAB_00745804:
00745804  83 7D E0 00               CMP dword ptr [EBP + -0x20],0x0
00745808  75 04                     JNZ 0x0074580e
0074580A  33 C0                     XOR EAX,EAX
0074580C  EB 63                     JMP 0x00745871
LAB_0074580e:
0074580E  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00745811  52                        PUSH EDX
00745812  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00745815  50                        PUSH EAX
00745816  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00745819  51                        PUSH ECX
0074581A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0074581D  52                        PUSH EDX
0074581E  FF 15 10 BC 85 00         CALL dword ptr [0x0085bc10]
00745824  85 C0                     TEST EAX,EAX
00745826  75 04                     JNZ 0x0074582c
00745828  33 C0                     XOR EAX,EAX
0074582A  EB 45                     JMP 0x00745871
LAB_0074582c:
0074582C  83 7D 14 00               CMP dword ptr [EBP + 0x14],0x0
00745830  75 1B                     JNZ 0x0074584d
00745832  6A 00                     PUSH 0x0
00745834  6A 00                     PUSH 0x0
00745836  6A FF                     PUSH -0x1
00745838  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0074583B  50                        PUSH EAX
0074583C  6A 01                     PUSH 0x1
0074583E  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00745841  51                        PUSH ECX
00745842  FF 15 68 BB 85 00         CALL dword ptr [0x0085bb68]
00745848  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0074584B  EB 1D                     JMP 0x0074586a
LAB_0074584d:
0074584D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00745850  52                        PUSH EDX
00745851  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00745854  50                        PUSH EAX
00745855  6A FF                     PUSH -0x1
00745857  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0074585A  51                        PUSH ECX
0074585B  6A 01                     PUSH 0x1
0074585D  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00745860  52                        PUSH EDX
00745861  FF 15 68 BB 85 00         CALL dword ptr [0x0085bb68]
00745867  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
LAB_0074586a:
0074586A  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0074586D  EB 02                     JMP 0x00745871
LAB_0074586f:
0074586F  33 C0                     XOR EAX,EAX
LAB_00745871:
00745871  8D 65 CC                  LEA ESP,[EBP + -0x34]
00745874  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00745877  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
0074587E  5F                        POP EDI
0074587F  5E                        POP ESI
00745880  5B                        POP EBX
00745881  8B E5                     MOV ESP,EBP
00745883  5D                        POP EBP
00745884  C3                        RET
