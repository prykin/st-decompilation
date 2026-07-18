FUN_0074736a:
0074736A  55                        PUSH EBP
0074736B  8B EC                     MOV EBP,ESP
0074736D  53                        PUSH EBX
0074736E  56                        PUSH ESI
0074736F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00747372  57                        PUSH EDI
00747373  8B 5E 2C                  MOV EBX,dword ptr [ESI + 0x2c]
00747376  53                        PUSH EBX
00747377  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074737D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00747380  85 C0                     TEST EAX,EAX
00747382  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
00747385  74 1C                     JZ 0x007473a3
00747387  8B 08                     MOV ECX,dword ptr [EAX]
00747389  8D 7E 38                  LEA EDI,[ESI + 0x38]
0074738C  57                        PUSH EDI
0074738D  68 E0 1A 7A 00            PUSH 0x7a1ae0
00747392  50                        PUSH EAX
00747393  FF 11                     CALL dword ptr [ECX]
00747395  85 C0                     TEST EAX,EAX
00747397  7C 0E                     JL 0x007473a7
00747399  8B 3F                     MOV EDI,dword ptr [EDI]
0074739B  57                        PUSH EDI
0074739C  8B 07                     MOV EAX,dword ptr [EDI]
0074739E  FF 50 08                  CALL dword ptr [EAX + 0x8]
007473A1  EB 04                     JMP 0x007473a7
LAB_007473a3:
007473A3  83 66 38 00               AND dword ptr [ESI + 0x38],0x0
LAB_007473a7:
007473A7  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
007473AA  85 C0                     TEST EAX,EAX
007473AC  74 0B                     JZ 0x007473b9
007473AE  50                        PUSH EAX
007473AF  E8 FC 6E FE FF            CALL 0x0072e2b0
007473B4  83 66 30 00               AND dword ptr [ESI + 0x30],0x0
007473B8  59                        POP ECX
LAB_007473b9:
007473B9  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
007473BD  74 2F                     JZ 0x007473ee
007473BF  FF 75 10                  PUSH dword ptr [EBP + 0x10]
007473C2  E8 9D 62 00 00            CALL 0x0074d664
007473C7  40                        INC EAX
007473C8  8D 3C 00                  LEA EDI,[EAX + EAX*0x1]
007473CB  57                        PUSH EDI
007473CC  E8 5F 71 FE FF            CALL 0x0072e530
007473D1  85 C0                     TEST EAX,EAX
007473D3  59                        POP ECX
007473D4  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
007473D7  74 15                     JZ 0x007473ee
007473D9  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
007473DC  8B CF                     MOV ECX,EDI
007473DE  8B F8                     MOV EDI,EAX
007473E0  8B C1                     MOV EAX,ECX
007473E2  C1 E9 02                  SHR ECX,0x2
007473E5  F3 A5                     MOVSD.REP ES:EDI,ESI
007473E7  8B C8                     MOV ECX,EAX
007473E9  83 E1 03                  AND ECX,0x3
007473EC  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_007473ee:
007473EE  53                        PUSH EBX
007473EF  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
007473F5  5F                        POP EDI
007473F6  5E                        POP ESI
007473F7  33 C0                     XOR EAX,EAX
007473F9  5B                        POP EBX
007473FA  5D                        POP EBP
007473FB  C2 0C 00                  RET 0xc
