CGenerate::sub_006948E0:
006948E0  55                        PUSH EBP
006948E1  8B EC                     MOV EBP,ESP
006948E3  51                        PUSH ECX
006948E4  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006948E7  C7 81 0F 57 00 00 01 00 00 00  MOV dword ptr [ECX + 0x570f],0x1
006948F1  53                        PUSH EBX
006948F2  56                        PUSH ESI
006948F3  8D 42 01                  LEA EAX,[EDX + 0x1]
006948F6  57                        PUSH EDI
006948F7  89 81 13 57 00 00         MOV dword ptr [ECX + 0x5713],EAX
006948FD  33 C0                     XOR EAX,EAX
006948FF  89 91 17 57 00 00         MOV dword ptr [ECX + 0x5717],EDX
00694905  89 81 1B 57 00 00         MOV dword ptr [ECX + 0x571b],EAX
0069490B  89 81 1F 57 00 00         MOV dword ptr [ECX + 0x571f],EAX
00694911  89 81 23 57 00 00         MOV dword ptr [ECX + 0x5723],EAX
00694917  89 81 27 57 00 00         MOV dword ptr [ECX + 0x5727],EAX
0069491D  83 CF FF                  OR EDI,0xffffffff
00694920  89 81 2B 57 00 00         MOV dword ptr [ECX + 0x572b],EAX
00694926  89 B9 2F 57 00 00         MOV dword ptr [ECX + 0x572f],EDI
0069492C  8D 72 FF                  LEA ESI,[EDX + -0x1]
0069492F  89 91 33 57 00 00         MOV dword ptr [ECX + 0x5733],EDX
00694935  89 B1 37 57 00 00         MOV dword ptr [ECX + 0x5737],ESI
0069493B  89 81 3B 57 00 00         MOV dword ptr [ECX + 0x573b],EAX
00694941  89 81 3F 57 00 00         MOV dword ptr [ECX + 0x573f],EAX
00694947  89 81 43 57 00 00         MOV dword ptr [ECX + 0x5743],EAX
0069494D  89 81 47 57 00 00         MOV dword ptr [ECX + 0x5747],EAX
00694953  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00694956  89 81 4B 57 00 00         MOV dword ptr [ECX + 0x574b],EAX
0069495C  89 B9 4F 57 00 00         MOV dword ptr [ECX + 0x574f],EDI
00694962  8B F2                     MOV ESI,EDX
00694964  2B FA                     SUB EDI,EDX
00694966  F7 DE                     NEG ESI
00694968  89 B9 53 57 00 00         MOV dword ptr [ECX + 0x5753],EDI
0069496E  89 B1 57 57 00 00         MOV dword ptr [ECX + 0x5757],ESI
00694974  89 81 5B 57 00 00         MOV dword ptr [ECX + 0x575b],EAX
0069497A  89 81 5F 57 00 00         MOV dword ptr [ECX + 0x575f],EAX
00694980  89 81 63 57 00 00         MOV dword ptr [ECX + 0x5763],EAX
00694986  BB 01 00 00 00            MOV EBX,0x1
0069498B  89 81 67 57 00 00         MOV dword ptr [ECX + 0x5767],EAX
00694991  89 81 6B 57 00 00         MOV dword ptr [ECX + 0x576b],EAX
00694997  2B DA                     SUB EBX,EDX
00694999  89 B1 6F 57 00 00         MOV dword ptr [ECX + 0x576f],ESI
0069499F  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006949A2  89 99 73 57 00 00         MOV dword ptr [ECX + 0x5773],EBX
006949A8  BB 01 00 00 00            MOV EBX,0x1
006949AD  89 B9 B3 57 00 00         MOV dword ptr [ECX + 0x57b3],EDI
006949B3  89 99 77 57 00 00         MOV dword ptr [ECX + 0x5777],EBX
006949B9  89 81 7B 57 00 00         MOV dword ptr [ECX + 0x577b],EAX
006949BF  89 81 7F 57 00 00         MOV dword ptr [ECX + 0x577f],EAX
006949C5  89 81 83 57 00 00         MOV dword ptr [ECX + 0x5783],EAX
006949CB  89 81 87 57 00 00         MOV dword ptr [ECX + 0x5787],EAX
006949D1  89 81 8B 57 00 00         MOV dword ptr [ECX + 0x578b],EAX
006949D7  C7 81 8F 57 00 00 FF FF FF FF  MOV dword ptr [ECX + 0x578f],0xffffffff
006949E1  89 99 93 57 00 00         MOV dword ptr [ECX + 0x5793],EBX
006949E7  8D 5A 01                  LEA EBX,[EDX + 0x1]
006949EA  89 B1 B7 57 00 00         MOV dword ptr [ECX + 0x57b7],ESI
006949F0  89 99 97 57 00 00         MOV dword ptr [ECX + 0x5797],EBX
006949F6  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006949F9  89 91 9B 57 00 00         MOV dword ptr [ECX + 0x579b],EDX
006949FF  89 99 9F 57 00 00         MOV dword ptr [ECX + 0x579f],EBX
00694A05  89 99 BF 57 00 00         MOV dword ptr [ECX + 0x57bf],EBX
00694A0B  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00694A0E  89 81 A3 57 00 00         MOV dword ptr [ECX + 0x57a3],EAX
00694A14  89 99 DB 57 00 00         MOV dword ptr [ECX + 0x57db],EBX
00694A1A  89 99 F3 57 00 00         MOV dword ptr [ECX + 0x57f3],EBX
00694A20  89 81 A7 57 00 00         MOV dword ptr [ECX + 0x57a7],EAX
00694A26  8D 5A 01                  LEA EBX,[EDX + 0x1]
00694A29  89 81 AB 57 00 00         MOV dword ptr [ECX + 0x57ab],EAX
00694A2F  C7 81 AF 57 00 00 FF FF FF FF  MOV dword ptr [ECX + 0x57af],0xffffffff
00694A39  89 91 BB 57 00 00         MOV dword ptr [ECX + 0x57bb],EDX
00694A3F  89 81 C3 57 00 00         MOV dword ptr [ECX + 0x57c3],EAX
00694A45  89 81 C7 57 00 00         MOV dword ptr [ECX + 0x57c7],EAX
00694A4B  89 81 CB 57 00 00         MOV dword ptr [ECX + 0x57cb],EAX
00694A51  C7 81 CF 57 00 00 FF FF FF FF  MOV dword ptr [ECX + 0x57cf],0xffffffff
00694A5B  89 B9 D3 57 00 00         MOV dword ptr [ECX + 0x57d3],EDI
00694A61  89 B1 D7 57 00 00         MOV dword ptr [ECX + 0x57d7],ESI
00694A67  C7 81 DF 57 00 00 01 00 00 00  MOV dword ptr [ECX + 0x57df],0x1
00694A71  89 81 E3 57 00 00         MOV dword ptr [ECX + 0x57e3],EAX
00694A77  89 81 E7 57 00 00         MOV dword ptr [ECX + 0x57e7],EAX
00694A7D  89 81 EB 57 00 00         MOV dword ptr [ECX + 0x57eb],EAX
00694A83  89 B1 EF 57 00 00         MOV dword ptr [ECX + 0x57ef],ESI
00694A89  C7 81 F7 57 00 00 01 00 00 00  MOV dword ptr [ECX + 0x57f7],0x1
00694A93  89 99 FB 57 00 00         MOV dword ptr [ECX + 0x57fb],EBX
00694A99  89 91 FF 57 00 00         MOV dword ptr [ECX + 0x57ff],EDX
00694A9F  89 81 03 58 00 00         MOV dword ptr [ECX + 0x5803],EAX
00694AA5  89 81 07 58 00 00         MOV dword ptr [ECX + 0x5807],EAX
00694AAB  89 81 0B 58 00 00         MOV dword ptr [ECX + 0x580b],EAX
00694AB1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00694AB4  89 B9 13 58 00 00         MOV dword ptr [ECX + 0x5813],EDI
00694ABA  89 91 27 58 00 00         MOV dword ptr [ECX + 0x5827],EDX
00694AC0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00694AC3  89 B1 17 58 00 00         MOV dword ptr [ECX + 0x5817],ESI
00694AC9  5F                        POP EDI
00694ACA  89 99 23 58 00 00         MOV dword ptr [ECX + 0x5823],EBX
00694AD0  5E                        POP ESI
00694AD1  C7 81 0F 58 00 00 FF FF FF FF  MOV dword ptr [ECX + 0x580f],0xffffffff
00694ADB  89 81 1B 58 00 00         MOV dword ptr [ECX + 0x581b],EAX
00694AE1  C7 81 1F 58 00 00 01 00 00 00  MOV dword ptr [ECX + 0x581f],0x1
00694AEB  89 91 2B 58 00 00         MOV dword ptr [ECX + 0x582b],EDX
00694AF1  5B                        POP EBX
00694AF2  8B E5                     MOV ESP,EBP
00694AF4  5D                        POP EBP
00694AF5  C2 04 00                  RET 0x4
