FUN_006c1d80:
006C1D80  55                        PUSH EBP
006C1D81  8B EC                     MOV EBP,ESP
006C1D83  A1 B4 68 85 00            MOV EAX,[0x008568b4]
006C1D88  57                        PUSH EDI
006C1D89  33 FF                     XOR EDI,EDI
006C1D8B  85 C0                     TEST EAX,EAX
006C1D8D  75 0A                     JNZ 0x006c1d99
006C1D8F  B8 CC FF FF FF            MOV EAX,0xffffffcc
006C1D94  5F                        POP EDI
006C1D95  5D                        POP EBP
006C1D96  C2 08 00                  RET 0x8
LAB_006c1d99:
006C1D99  56                        PUSH ESI
006C1D9A  68 98 68 85 00            PUSH 0x856898
006C1D9F  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006C1DA5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C1DA8  85 C0                     TEST EAX,EAX
006C1DAA  7C 39                     JL 0x006c1de5
006C1DAC  83 F8 20                  CMP EAX,0x20
006C1DAF  7D 34                     JGE 0x006c1de5
006C1DB1  8D 34 40                  LEA ESI,[EAX + EAX*0x2]
006C1DB4  C1 E6 04                  SHL ESI,0x4
006C1DB7  03 F0                     ADD ESI,EAX
006C1DB9  C1 E6 02                  SHL ESI,0x2
006C1DBC  F6 86 F8 4F 85 00 01      TEST byte ptr [ESI + 0x854ff8],0x1
006C1DC3  74 20                     JZ 0x006c1de5
006C1DC5  8B 86 04 50 85 00         MOV EAX,dword ptr [ESI + 0x855004]
006C1DCB  53                        PUSH EBX
006C1DCC  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006C1DCF  85 C0                     TEST EAX,EAX
006C1DD1  74 09                     JZ 0x006c1ddc
006C1DD3  8B 08                     MOV ECX,dword ptr [EAX]
006C1DD5  53                        PUSH EBX
006C1DD6  50                        PUSH EAX
006C1DD7  FF 51 40                  CALL dword ptr [ECX + 0x40]
006C1DDA  8B F8                     MOV EDI,EAX
LAB_006c1ddc:
006C1DDC  89 9E 2C 50 85 00         MOV dword ptr [ESI + 0x85502c],EBX
006C1DE2  5B                        POP EBX
006C1DE3  EB 05                     JMP 0x006c1dea
LAB_006c1de5:
006C1DE5  BF FC FF FF FF            MOV EDI,0xfffffffc
LAB_006c1dea:
006C1DEA  68 98 68 85 00            PUSH 0x856898
006C1DEF  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C1DF5  83 FF FC                  CMP EDI,-0x4
006C1DF8  5E                        POP ESI
006C1DF9  74 1B                     JZ 0x006c1e16
006C1DFB  85 FF                     TEST EDI,EDI
006C1DFD  74 17                     JZ 0x006c1e16
006C1DFF  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006C1E05  68 38 05 00 00            PUSH 0x538
006C1E0A  68 14 DE 7E 00            PUSH 0x7ede14
006C1E0F  52                        PUSH EDX
006C1E10  57                        PUSH EDI
006C1E11  E8 2A 40 FE FF            CALL 0x006a5e40
LAB_006c1e16:
006C1E16  8B C7                     MOV EAX,EDI
006C1E18  5F                        POP EDI
006C1E19  5D                        POP EBP
006C1E1A  C2 08 00                  RET 0x8
