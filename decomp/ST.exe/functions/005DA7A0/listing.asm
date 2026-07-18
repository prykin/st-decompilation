FUN_005da7a0:
005DA7A0  55                        PUSH EBP
005DA7A1  8B EC                     MOV EBP,ESP
005DA7A3  83 EC 48                  SUB ESP,0x48
005DA7A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005DA7AB  56                        PUSH ESI
005DA7AC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005DA7AF  57                        PUSH EDI
005DA7B0  8D 55 BC                  LEA EDX,[EBP + -0x44]
005DA7B3  8D 4D B8                  LEA ECX,[EBP + -0x48]
005DA7B6  6A 00                     PUSH 0x0
005DA7B8  52                        PUSH EDX
005DA7B9  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005DA7BC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DA7C2  E8 29 30 15 00            CALL 0x0072d7f0
005DA7C7  83 C4 08                  ADD ESP,0x8
005DA7CA  85 C0                     TEST EAX,EAX
005DA7CC  0F 85 CC 00 00 00         JNZ 0x005da89e
005DA7D2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005DA7D5  8D B0 8A 06 00 00         LEA ESI,[EAX + 0x68a]
005DA7DB  8B 80 8A 06 00 00         MOV EAX,dword ptr [EAX + 0x68a]
005DA7E1  85 C0                     TEST EAX,EAX
005DA7E3  0F 85 A4 00 00 00         JNZ 0x005da88d
005DA7E9  56                        PUSH ESI
005DA7EA  E8 E1 BA 0D 00            CALL 0x006b62d0
005DA7EF  8B 06                     MOV EAX,dword ptr [ESI]
005DA7F1  BF 01 00 00 00            MOV EDI,0x1
005DA7F6  8B 08                     MOV ECX,dword ptr [EAX]
005DA7F8  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005DA7FB  3B D1                     CMP EDX,ECX
005DA7FD  7C 20                     JL 0x005da81f
005DA7FF  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
005DA802  8D 14 8D 1C 00 00 00      LEA EDX,[ECX*0x4 + 0x1c]
005DA809  52                        PUSH EDX
005DA80A  50                        PUSH EAX
005DA80B  E8 40 53 0E 00            CALL 0x006bfb50
005DA810  85 C0                     TEST EAX,EAX
005DA812  74 09                     JZ 0x005da81d
005DA814  89 06                     MOV dword ptr [ESI],EAX
005DA816  8B 08                     MOV ECX,dword ptr [EAX]
005DA818  41                        INC ECX
005DA819  89 08                     MOV dword ptr [EAX],ECX
005DA81B  EB 02                     JMP 0x005da81f
LAB_005da81d:
005DA81D  33 FF                     XOR EDI,EDI
LAB_005da81f:
005DA81F  85 FF                     TEST EDI,EDI
005DA821  74 6A                     JZ 0x005da88d
005DA823  A1 18 76 80 00            MOV EAX,[0x00807618]
005DA828  50                        PUSH EAX
005DA829  68 4B 25 00 00            PUSH 0x254b
005DA82E  E8 0D 59 0D 00            CALL 0x006b0140
005DA833  50                        PUSH EAX
005DA834  E8 37 D9 0E 00            CALL 0x006c8170
005DA839  8B F8                     MOV EDI,EAX
005DA83B  85 FF                     TEST EDI,EDI
005DA83D  74 4E                     JZ 0x005da88d
005DA83F  8B 06                     MOV EAX,dword ptr [ESI]
005DA841  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005DA844  8D 50 08                  LEA EDX,[EAX + 0x8]
005DA847  83 C0 1C                  ADD EAX,0x1c
005DA84A  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
005DA84D  C1 E1 02                  SHL ECX,0x2
005DA850  51                        PUSH ECX
005DA851  52                        PUSH EDX
005DA852  50                        PUSH EAX
005DA853  E8 18 32 15 00            CALL 0x0072da70
005DA858  8B 06                     MOV EAX,dword ptr [ESI]
005DA85A  8B 0D 00 D7 7C 00         MOV ECX,dword ptr [0x007cd700]
005DA860  83 C0 0C                  ADD EAX,0xc
005DA863  83 C4 0C                  ADD ESP,0xc
005DA866  89 08                     MOV dword ptr [EAX],ECX
005DA868  8B 15 04 D7 7C 00         MOV EDX,dword ptr [0x007cd704]
005DA86E  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
005DA871  8B 0D 08 D7 7C 00         MOV ECX,dword ptr [0x007cd708]
005DA877  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
005DA87A  8B 15 0C D7 7C 00         MOV EDX,dword ptr [0x007cd70c]
005DA880  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
005DA883  8B 06                     MOV EAX,dword ptr [ESI]
005DA885  89 78 08                  MOV dword ptr [EAX + 0x8],EDI
005DA888  8B 36                     MOV ESI,dword ptr [ESI]
005DA88A  FF 46 04                  INC dword ptr [ESI + 0x4]
LAB_005da88d:
005DA88D  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005DA890  33 C0                     XOR EAX,EAX
005DA892  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DA898  5F                        POP EDI
005DA899  5E                        POP ESI
005DA89A  8B E5                     MOV ESP,EBP
005DA89C  5D                        POP EBP
005DA89D  C3                        RET
LAB_005da89e:
005DA89E  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005DA8A1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005DA8A4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005DA8AA  E8 47 AD E2 FF            CALL 0x004055f6
005DA8AF  5F                        POP EDI
005DA8B0  B8 FA FF FF FF            MOV EAX,0xfffffffa
005DA8B5  5E                        POP ESI
005DA8B6  8B E5                     MOV ESP,EBP
005DA8B8  5D                        POP EBP
005DA8B9  C3                        RET
