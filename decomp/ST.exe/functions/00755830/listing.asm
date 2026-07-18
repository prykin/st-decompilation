FUN_00755830:
00755830  55                        PUSH EBP
00755831  8B EC                     MOV EBP,ESP
00755833  51                        PUSH ECX
00755834  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00755837  53                        PUSH EBX
00755838  56                        PUSH ESI
00755839  57                        PUSH EDI
0075583A  85 C9                     TEST ECX,ECX
0075583C  0F 8D FA 00 00 00         JGE 0x0075593c
00755842  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00755845  B9 0E 00 00 00            MOV ECX,0xe
0075584A  53                        PUSH EBX
0075584B  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0075584E  8D 70 40                  LEA ESI,[EAX + 0x40]
00755851  8D 78 48                  LEA EDI,[EAX + 0x48]
00755854  F3 A5                     MOVSD.REP ES:EDI,ESI
00755856  E8 E5 E2 FF FF            CALL 0x00753b40
0075585B  8B F0                     MOV ESI,EAX
0075585D  85 F6                     TEST ESI,ESI
0075585F  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
00755862  7D 09                     JGE 0x0075586d
00755864  5F                        POP EDI
00755865  5E                        POP ESI
00755866  5B                        POP EBX
00755867  8B E5                     MOV ESP,EBP
00755869  5D                        POP EBP
0075586A  C2 0C 00                  RET 0xc
LAB_0075586d:
0075586D  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
00755870  0F BF 48 16               MOVSX ECX,word ptr [EAX + 0x16]
00755874  51                        PUSH ECX
00755875  56                        PUSH ESI
00755876  50                        PUSH EAX
00755877  E8 D4 F3 F7 FF            CALL 0x006d4c50
0075587C  85 C0                     TEST EAX,EAX
0075587E  74 14                     JZ 0x00755894
00755880  0F 8E D9 00 00 00         JLE 0x0075595f
00755886  5F                        POP EDI
00755887  5E                        POP ESI
00755888  0D 00 00 FF FF            OR EAX,0xffff0000
0075588D  5B                        POP EBX
0075588E  8B E5                     MOV ESP,EBP
00755890  5D                        POP EBP
00755891  C2 0C 00                  RET 0xc
LAB_00755894:
00755894  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
00755897  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
0075589A  83 CF 10                  OR EDI,0x10
0075589D  89 78 08                  MOV dword ptr [EAX + 0x8],EDI
007558A0  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
007558A3  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
007558A6  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
007558A9  8B 52 24                  MOV EDX,dword ptr [EDX + 0x24]
007558AC  8D 3C 31                  LEA EDI,[ECX + ESI*0x1]
007558AF  03 D1                     ADD EDX,ECX
007558B1  0F BF 48 16               MOVSX ECX,word ptr [EAX + 0x16]
007558B5  8B C1                     MOV EAX,ECX
007558B7  8B F2                     MOV ESI,EDX
007558B9  C1 E9 02                  SHR ECX,0x2
007558BC  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
007558BF  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
007558C2  F3 A5                     MOVSD.REP ES:EDI,ESI
007558C4  8B C8                     MOV ECX,EAX
007558C6  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007558C9  83 E1 03                  AND ECX,0x3
007558CC  F3 A4                     MOVSB.REP ES:EDI,ESI
007558CE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007558D1  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
007558D4  89 08                     MOV dword ptr [EAX],ECX
007558D6  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
007558D9  66 8B 48 34               MOV CX,word ptr [EAX + 0x34]
007558DD  66 85 C9                  TEST CX,CX
007558E0  74 05                     JZ 0x007558e7
007558E2  0F BF C1                  MOVSX EAX,CX
007558E5  EB 0A                     JMP 0x007558f1
LAB_007558e7:
007558E7  8D 4E 08                  LEA ECX,[ESI + 0x8]
007558EA  51                        PUSH ECX
007558EB  FF 50 08                  CALL dword ptr [EAX + 0x8]
007558EE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_007558f1:
007558F1  8D 48 08                  LEA ECX,[EAX + 0x8]
007558F4  8D 7A 10                  LEA EDI,[EDX + 0x10]
007558F7  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
007558FA  8B C1                     MOV EAX,ECX
007558FC  C1 E9 02                  SHR ECX,0x2
007558FF  F3 A5                     MOVSD.REP ES:EDI,ESI
00755901  8B C8                     MOV ECX,EAX
00755903  83 E1 03                  AND ECX,0x3
00755906  F3 A4                     MOVSB.REP ES:EDI,ESI
00755908  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075590B  66 89 42 08               MOV word ptr [EDX + 0x8],AX
0075590F  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
00755912  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
00755915  33 C0                     XOR EAX,EAX
00755917  5F                        POP EDI
00755918  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
0075591B  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
0075591E  5E                        POP ESI
0075591F  89 42 44                  MOV dword ptr [EDX + 0x44],EAX
00755922  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00755925  66 FF 40 2A               INC word ptr [EAX + 0x2a]
00755929  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0075592C  5B                        POP EBX
0075592D  C7 40 14 01 00 00 00      MOV dword ptr [EAX + 0x14],0x1
00755934  33 C0                     XOR EAX,EAX
00755936  8B E5                     MOV ESP,EBP
00755938  5D                        POP EBP
00755939  C2 0C 00                  RET 0xc
LAB_0075593c:
0075593C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075593F  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
00755942  8B 78 10                  MOV EDI,dword ptr [EAX + 0x10]
00755945  8B 4C CA 44               MOV ECX,dword ptr [EDX + ECX*0x8 + 0x44]
00755949  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075594C  51                        PUSH ECX
0075594D  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00755950  52                        PUSH EDX
00755951  8B 51 34                  MOV EDX,dword ptr [ECX + 0x34]
00755954  03 D7                     ADD EDX,EDI
00755956  52                        PUSH EDX
00755957  50                        PUSH EAX
00755958  E8 63 1B 00 00            CALL 0x007574c0
0075595D  33 C0                     XOR EAX,EAX
LAB_0075595f:
0075595F  5F                        POP EDI
00755960  5E                        POP ESI
00755961  5B                        POP EBX
00755962  8B E5                     MOV ESP,EBP
00755964  5D                        POP EBP
00755965  C2 0C 00                  RET 0xc
