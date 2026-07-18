FUN_00711580:
00711580  55                        PUSH EBP
00711581  8B EC                     MOV EBP,ESP
00711583  51                        PUSH ECX
00711584  53                        PUSH EBX
00711585  56                        PUSH ESI
00711586  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00711589  33 DB                     XOR EBX,EBX
0071158B  85 F6                     TEST ESI,ESI
0071158D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00711590  75 0A                     JNZ 0x0071159c
00711592  5E                        POP ESI
00711593  33 C0                     XOR EAX,EAX
00711595  5B                        POP EBX
00711596  8B E5                     MOV ESP,EBP
00711598  5D                        POP EBP
00711599  C2 04 00                  RET 0x4
LAB_0071159c:
0071159C  8B 06                     MOV EAX,dword ptr [ESI]
0071159E  57                        PUSH EDI
0071159F  33 FF                     XOR EDI,EDI
007115A1  85 C0                     TEST EAX,EAX
007115A3  74 25                     JZ 0x007115ca
LAB_007115a5:
007115A5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007115A8  50                        PUSH EAX
007115A9  E8 12 FC FF FF            CALL 0x007111c0
007115AE  83 C6 04                  ADD ESI,0x4
007115B1  03 D8                     ADD EBX,EAX
007115B3  47                        INC EDI
007115B4  8B 06                     MOV EAX,dword ptr [ESI]
007115B6  85 C0                     TEST EAX,EAX
007115B8  75 EB                     JNZ 0x007115a5
007115BA  85 FF                     TEST EDI,EDI
007115BC  74 0C                     JZ 0x007115ca
007115BE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007115C1  4F                        DEC EDI
007115C2  8B 48 5C                  MOV ECX,dword ptr [EAX + 0x5c]
007115C5  0F AF CF                  IMUL ECX,EDI
007115C8  03 D9                     ADD EBX,ECX
LAB_007115ca:
007115CA  5F                        POP EDI
007115CB  8B C3                     MOV EAX,EBX
007115CD  5E                        POP ESI
007115CE  5B                        POP EBX
007115CF  8B E5                     MOV ESP,EBP
007115D1  5D                        POP EBP
007115D2  C2 04 00                  RET 0x4
