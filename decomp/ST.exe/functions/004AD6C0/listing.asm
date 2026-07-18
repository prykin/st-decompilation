FUN_004ad6c0:
004AD6C0  55                        PUSH EBP
004AD6C1  8B EC                     MOV EBP,ESP
004AD6C3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004AD6C6  0F BE 48 13               MOVSX ECX,byte ptr [EAX + 0x13]
004AD6CA  8B 50 20                  MOV EDX,dword ptr [EAX + 0x20]
004AD6CD  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
004AD6D0  8B 0C 8A                  MOV ECX,dword ptr [EDX + ECX*0x4]
004AD6D3  8B 49 29                  MOV ECX,dword ptr [ECX + 0x29]
004AD6D6  85 C9                     TEST ECX,ECX
004AD6D8  74 3D                     JZ 0x004ad717
004AD6DA  8B 50 30                  MOV EDX,dword ptr [EAX + 0x30]
004AD6DD  8B 0C 91                  MOV ECX,dword ptr [ECX + EDX*0x4]
004AD6E0  85 C9                     TEST ECX,ECX
004AD6E2  74 33                     JZ 0x004ad717
004AD6E4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004AD6E7  D9 40 28                  FLD float ptr [EAX + 0x28]
004AD6EA  D8 25 A8 07 79 00         FSUB float ptr [0x007907a8]
004AD6F0  52                        PUSH EDX
004AD6F1  8B 50 2C                  MOV EDX,dword ptr [EAX + 0x2c]
004AD6F4  6A 20                     PUSH 0x20
004AD6F6  6A 20                     PUSH 0x20
004AD6F8  52                        PUSH EDX
004AD6F9  51                        PUSH ECX
004AD6FA  D9 1C 24                  FSTP float ptr [ESP]
004AD6FD  D9 40 24                  FLD float ptr [EAX + 0x24]
004AD700  D8 25 A8 07 79 00         FSUB float ptr [0x007907a8]
004AD706  51                        PUSH ECX
004AD707  D9 1C 24                  FSTP float ptr [ESP]
004AD70A  51                        PUSH ECX
004AD70B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004AD70E  E8 0A 67 F5 FF            CALL 0x00403e1d
004AD713  5D                        POP EBP
004AD714  C2 10 00                  RET 0x10
LAB_004ad717:
004AD717  B8 FC FF FF FF            MOV EAX,0xfffffffc
004AD71C  5D                        POP EBP
004AD71D  C2 10 00                  RET 0x10
