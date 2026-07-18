FUN_0074fc49:
0074FC49  55                        PUSH EBP
0074FC4A  8B EC                     MOV EBP,ESP
0074FC4C  51                        PUSH ECX
0074FC4D  53                        PUSH EBX
0074FC4E  56                        PUSH ESI
0074FC4F  57                        PUSH EDI
0074FC50  8B F1                     MOV ESI,ECX
0074FC52  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074FC55  6A 00                     PUSH 0x0
0074FC57  E8 5C BB FF FF            CALL 0x0074b7b8
0074FC5C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0074FC5F  FF 75 30                  PUSH dword ptr [EBP + 0x30]
0074FC62  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
0074FC65  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0074FC68  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
0074FC6B  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0074FC6E  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0074FC71  FF 75 2C                  PUSH dword ptr [EBP + 0x2c]
0074FC74  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
0074FC77  66 8B 45 28               MOV AX,word ptr [EBP + 0x28]
0074FC7B  66 89 46 28               MOV word ptr [ESI + 0x28],AX
0074FC7F  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
0074FC82  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
0074FC85  8B 45 3C                  MOV EAX,dword ptr [EBP + 0x3c]
0074FC88  8D 4E 34                  LEA ECX,[ESI + 0x34]
0074FC8B  89 5E 10                  MOV dword ptr [ESI + 0x10],EBX
0074FC8E  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
0074FC91  E8 0D FE FF FF            CALL 0x0074faa3
0074FC96  DD 45 18                  FLD double ptr [EBP + 0x18]
0074FC99  DC 0D 00 1C 7A 00         FMUL double ptr [0x007a1c00]
0074FC9F  83 66 48 00               AND dword ptr [ESI + 0x48],0x0
0074FCA3  8D 7E 48                  LEA EDI,[ESI + 0x48]
0074FCA6  C7 46 4C 04 40 00 80      MOV dword ptr [ESI + 0x4c],0x80004004
0074FCAD  C7 06 88 1D 7A 00         MOV dword ptr [ESI],0x7a1d88
0074FCB3  C7 46 0C 68 1D 7A 00      MOV dword ptr [ESI + 0xc],0x7a1d68
0074FCBA  E8 C9 E5 FD FF            CALL 0x0072e288
0074FCBF  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
0074FCC2  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
0074FCC5  89 56 1C                  MOV dword ptr [ESI + 0x1c],EDX
0074FCC8  8D 55 0C                  LEA EDX,[EBP + 0xc]
0074FCCB  8B 08                     MOV ECX,dword ptr [EAX]
0074FCCD  52                        PUSH EDX
0074FCCE  FF 76 20                  PUSH dword ptr [ESI + 0x20]
0074FCD1  50                        PUSH EAX
0074FCD2  FF 11                     CALL dword ptr [ECX]
0074FCD4  85 C0                     TEST EAX,EAX
0074FCD6  7C 4D                     JL 0x0074fd25
0074FCD8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0074FCDB  50                        PUSH EAX
0074FCDC  8B 08                     MOV ECX,dword ptr [EAX]
0074FCDE  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074FCE1  8D 45 FC                  LEA EAX,[EBP + -0x4]
0074FCE4  50                        PUSH EAX
0074FCE5  6A 00                     PUSH 0x0
0074FCE7  6A 00                     PUSH 0x0
0074FCE9  FF 75 20                  PUSH dword ptr [EBP + 0x20]
0074FCEC  57                        PUSH EDI
0074FCED  E8 45 E6 FF FF            CALL 0x0074e337
0074FCF2  85 C0                     TEST EAX,EAX
0074FCF4  7C 2F                     JL 0x0074fd25
0074FCF6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074FCF9  50                        PUSH EAX
0074FCFA  8B 08                     MOV ECX,dword ptr [EAX]
0074FCFC  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074FCFF  66 83 7D 28 04            CMP word ptr [EBP + 0x28],0x4
0074FD04  75 13                     JNZ 0x0074fd19
0074FD06  8D 46 44                  LEA EAX,[ESI + 0x44]
0074FD09  C7 46 40 01 00 00 00      MOV dword ptr [ESI + 0x40],0x1
0074FD10  89 46 38                  MOV dword ptr [ESI + 0x38],EAX
0074FD13  C7 00 FD FF FF FF         MOV dword ptr [EAX],0xfffffffd
LAB_0074fd19:
0074FD19  8B 03                     MOV EAX,dword ptr [EBX]
0074FD1B  56                        PUSH ESI
0074FD1C  8B CB                     MOV ECX,EBX
0074FD1E  FF 50 08                  CALL dword ptr [EAX + 0x8]
0074FD21  85 C0                     TEST EAX,EAX
0074FD23  7D 05                     JGE 0x0074fd2a
LAB_0074fd25:
0074FD25  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0074FD28  89 01                     MOV dword ptr [ECX],EAX
LAB_0074fd2a:
0074FD2A  8B C6                     MOV EAX,ESI
0074FD2C  5F                        POP EDI
0074FD2D  5E                        POP ESI
0074FD2E  5B                        POP EBX
0074FD2F  C9                        LEAVE
0074FD30  C2 38 00                  RET 0x38
