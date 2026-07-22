AiFltClassTy::sub_00661800:
00661800  55                        PUSH EBP
00661801  8B EC                     MOV EBP,ESP
00661803  83 EC 08                  SUB ESP,0x8
00661806  56                        PUSH ESI
00661807  33 F6                     XOR ESI,ESI
00661809  57                        PUSH EDI
0066180A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0066180D  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00661810  E8 BA 00 DA FF            CALL 0x004018cf
00661815  8B F8                     MOV EDI,EAX
00661817  85 FF                     TEST EDI,EDI
00661819  0F 84 89 00 00 00         JZ 0x006618a8
0066181F  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00661822  53                        PUSH EBX
00661823  33 DB                     XOR EBX,EBX
00661825  85 C0                     TEST EAX,EAX
00661827  7E 70                     JLE 0x00661899
00661829  3B D8                     CMP EBX,EAX
LAB_0066182b:
0066182B  73 0D                     JNC 0x0066183a
0066182D  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00661830  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
00661833  0F AF C3                  IMUL EAX,EBX
00661836  03 C1                     ADD EAX,ECX
00661838  EB 02                     JMP 0x0066183c
LAB_0066183a:
0066183A  33 C0                     XOR EAX,EAX
LAB_0066183c:
0066183C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0066183F  66 8B 00                  MOV AX,word ptr [EAX]
00661842  6A 01                     PUSH 0x1
00661844  50                        PUSH EAX
00661845  8A 51 24                  MOV DL,byte ptr [ECX + 0x24]
00661848  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0066184E  52                        PUSH EDX
0066184F  E8 66 10 DA FF            CALL 0x004028ba
00661854  8B F0                     MOV ESI,EAX
00661856  85 F6                     TEST ESI,ESI
00661858  74 34                     JZ 0x0066188e
0066185A  8B 06                     MOV EAX,dword ptr [ESI]
0066185C  8B CE                     MOV ECX,ESI
0066185E  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00661861  83 F8 32                  CMP EAX,0x32
00661864  7C 28                     JL 0x0066188e
00661866  83 F8 74                  CMP EAX,0x74
00661869  7D 23                     JGE 0x0066188e
0066186B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0066186E  66 83 79 39 03            CMP word ptr [ECX + 0x39],0x3
00661873  74 19                     JZ 0x0066188e
00661875  83 BE 61 03 00 00 05      CMP dword ptr [ESI + 0x361],0x5
0066187C  74 0D                     JZ 0x0066188b
0066187E  6A 05                     PUSH 0x5
00661880  8B CE                     MOV ECX,ESI
00661882  E8 42 2E DA FF            CALL 0x004046c9
00661887  85 C0                     TEST EAX,EAX
00661889  7E 03                     JLE 0x0066188e
LAB_0066188b:
0066188B  FF 45 FC                  INC dword ptr [EBP + -0x4]
LAB_0066188e:
0066188E  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00661891  43                        INC EBX
00661892  3B D8                     CMP EBX,EAX
00661894  7C 95                     JL 0x0066182b
00661896  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_00661899:
00661899  57                        PUSH EDI
0066189A  E8 71 C8 04 00            CALL 0x006ae110
0066189F  5B                        POP EBX
006618A0  8B C6                     MOV EAX,ESI
006618A2  5F                        POP EDI
006618A3  5E                        POP ESI
006618A4  8B E5                     MOV ESP,EBP
006618A6  5D                        POP EBP
006618A7  C3                        RET
LAB_006618a8:
006618A8  8B C6                     MOV EAX,ESI
006618AA  5F                        POP EDI
006618AB  5E                        POP ESI
006618AC  8B E5                     MOV ESP,EBP
006618AE  5D                        POP EBP
006618AF  C3                        RET
