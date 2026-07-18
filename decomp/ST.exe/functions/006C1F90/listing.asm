FUN_006c1f90:
006C1F90  55                        PUSH EBP
006C1F91  8B EC                     MOV EBP,ESP
006C1F93  51                        PUSH ECX
006C1F94  A1 B4 68 85 00            MOV EAX,[0x008568b4]
006C1F99  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006C1FA0  85 C0                     TEST EAX,EAX
006C1FA2  75 0B                     JNZ 0x006c1faf
006C1FA4  B8 CC FF FF FF            MOV EAX,0xffffffcc
006C1FA9  8B E5                     MOV ESP,EBP
006C1FAB  5D                        POP EBP
006C1FAC  C2 04 00                  RET 0x4
LAB_006c1faf:
006C1FAF  53                        PUSH EBX
006C1FB0  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006C1FB3  85 DB                     TEST EBX,EBX
006C1FB5  7C 7E                     JL 0x006c2035
006C1FB7  83 FB 20                  CMP EBX,0x20
006C1FBA  7D 79                     JGE 0x006c2035
006C1FBC  56                        PUSH ESI
006C1FBD  57                        PUSH EDI
006C1FBE  68 98 68 85 00            PUSH 0x856898
006C1FC3  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006C1FC9  8B 35 F4 4F 85 00         MOV ESI,dword ptr [0x00854ff4]
006C1FCF  85 F6                     TEST ESI,ESI
006C1FD1  74 4B                     JZ 0x006c201e
LAB_006c1fd3:
006C1FD3  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
006C1FD6  85 C0                     TEST EAX,EAX
006C1FD8  7D 17                     JGE 0x006c1ff1
006C1FDA  8B 3E                     MOV EDI,dword ptr [ESI]
006C1FDC  56                        PUSH ESI
006C1FDD  68 F4 4F 85 00            PUSH 0x854ff4
006C1FE2  E8 D9 78 FF FF            CALL 0x006b98c0
006C1FE7  56                        PUSH ESI
006C1FE8  E8 A3 3E FE FF            CALL 0x006a5e90
006C1FED  8B F7                     MOV ESI,EDI
006C1FEF  EB 0B                     JMP 0x006c1ffc
LAB_006c1ff1:
006C1FF1  3B 5E 34                  CMP EBX,dword ptr [ESI + 0x34]
006C1FF4  7C 04                     JL 0x006c1ffa
006C1FF6  3B D8                     CMP EBX,EAX
006C1FF8  7E 1D                     JLE 0x006c2017
LAB_006c1ffa:
006C1FFA  8B 36                     MOV ESI,dword ptr [ESI]
LAB_006c1ffc:
006C1FFC  85 F6                     TEST ESI,ESI
006C1FFE  75 D3                     JNZ 0x006c1fd3
006C2000  68 98 68 85 00            PUSH 0x856898
006C2005  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C200B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C200E  5F                        POP EDI
006C200F  5E                        POP ESI
006C2010  5B                        POP EBX
006C2011  8B E5                     MOV ESP,EBP
006C2013  5D                        POP EBP
006C2014  C2 04 00                  RET 0x4
LAB_006c2017:
006C2017  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_006c201e:
006C201E  68 98 68 85 00            PUSH 0x856898
006C2023  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C2029  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C202C  5F                        POP EDI
006C202D  5E                        POP ESI
006C202E  5B                        POP EBX
006C202F  8B E5                     MOV ESP,EBP
006C2031  5D                        POP EBP
006C2032  C2 04 00                  RET 0x4
LAB_006c2035:
006C2035  C7 45 FC FC FF FF FF      MOV dword ptr [EBP + -0x4],0xfffffffc
006C203C  5B                        POP EBX
006C203D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C2040  8B E5                     MOV ESP,EBP
006C2042  5D                        POP EBP
006C2043  C2 04 00                  RET 0x4
