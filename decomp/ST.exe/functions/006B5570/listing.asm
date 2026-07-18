FUN_006b5570:
006B5570  55                        PUSH EBP
006B5571  8B EC                     MOV EBP,ESP
006B5573  56                        PUSH ESI
006B5574  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B5577  85 F6                     TEST ESI,ESI
006B5579  74 34                     JZ 0x006b55af
006B557B  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006B557E  57                        PUSH EDI
006B557F  33 FF                     XOR EDI,EDI
006B5581  85 C0                     TEST EAX,EAX
006B5583  76 14                     JBE 0x006b5599
LAB_006b5585:
006B5585  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006B5588  8B 0C B8                  MOV ECX,dword ptr [EAX + EDI*0x4]
006B558B  51                        PUSH ECX
006B558C  E8 FF 08 FF FF            CALL 0x006a5e90
006B5591  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006B5594  47                        INC EDI
006B5595  3B F8                     CMP EDI,EAX
006B5597  72 EC                     JC 0x006b5585
LAB_006b5599:
006B5599  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
006B559C  52                        PUSH EDX
006B559D  E8 EE 08 FF FF            CALL 0x006a5e90
006B55A2  8A 06                     MOV AL,byte ptr [ESI]
006B55A4  5F                        POP EDI
006B55A5  A8 08                     TEST AL,0x8
006B55A7  74 06                     JZ 0x006b55af
006B55A9  56                        PUSH ESI
006B55AA  E8 E1 08 FF FF            CALL 0x006a5e90
LAB_006b55af:
006B55AF  5E                        POP ESI
006B55B0  5D                        POP EBP
006B55B1  C2 04 00                  RET 0x4
