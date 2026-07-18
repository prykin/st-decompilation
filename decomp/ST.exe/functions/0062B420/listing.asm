FUN_0062b420:
0062B420  55                        PUSH EBP
0062B421  8B EC                     MOV EBP,ESP
0062B423  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0062B426  8B 88 CA 00 00 00         MOV ECX,dword ptr [EAX + 0xca]
0062B42C  8B 49 29                  MOV ECX,dword ptr [ECX + 0x29]
0062B42F  85 C9                     TEST ECX,ECX
0062B431  74 40                     JZ 0x0062b473
0062B433  8B 90 B2 00 00 00         MOV EDX,dword ptr [EAX + 0xb2]
0062B439  8B 0C 91                  MOV ECX,dword ptr [ECX + EDX*0x4]
0062B43C  85 C9                     TEST ECX,ECX
0062B43E  74 33                     JZ 0x0062b473
0062B440  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0062B443  D9 40 6E                  FLD float ptr [EAX + 0x6e]
0062B446  D8 25 A8 07 79 00         FSUB float ptr [0x007907a8]
0062B44C  52                        PUSH EDX
0062B44D  8B 50 72                  MOV EDX,dword ptr [EAX + 0x72]
0062B450  6A 20                     PUSH 0x20
0062B452  6A 20                     PUSH 0x20
0062B454  52                        PUSH EDX
0062B455  51                        PUSH ECX
0062B456  D9 1C 24                  FSTP float ptr [ESP]
0062B459  D9 40 6A                  FLD float ptr [EAX + 0x6a]
0062B45C  D8 25 A8 07 79 00         FSUB float ptr [0x007907a8]
0062B462  51                        PUSH ECX
0062B463  D9 1C 24                  FSTP float ptr [ESP]
0062B466  51                        PUSH ECX
0062B467  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0062B46A  E8 AE 89 DD FF            CALL 0x00403e1d
0062B46F  5D                        POP EBP
0062B470  C2 10 00                  RET 0x10
LAB_0062b473:
0062B473  B8 FC FF FF FF            MOV EAX,0xfffffffc
0062B478  5D                        POP EBP
0062B479  C2 10 00                  RET 0x10
