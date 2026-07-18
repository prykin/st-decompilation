FUN_006a47f0:
006A47F0  55                        PUSH EBP
006A47F1  8B EC                     MOV EBP,ESP
006A47F3  56                        PUSH ESI
006A47F4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006A47F7  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006A47FA  85 C0                     TEST EAX,EAX
006A47FC  75 35                     JNZ 0x006a4833
006A47FE  A1 A4 C4 7E 00            MOV EAX,[0x007ec4a4]
006A4803  66 8B 0D A8 C4 7E 00      MOV CX,word ptr [0x007ec4a8]
006A480A  8A 15 AA C4 7E 00         MOV DL,byte ptr [0x007ec4aa]
006A4810  A3 F4 49 85 00            MOV [0x008549f4],EAX
006A4815  66 89 0D F8 49 85 00      MOV word ptr [0x008549f8],CX
006A481C  88 15 FA 49 85 00         MOV byte ptr [0x008549fa],DL
006A4822  C6 05 43 4A 85 00 00      MOV byte ptr [0x00854a43],0x0
006A4829  B8 F4 49 85 00            MOV EAX,0x8549f4
006A482E  5E                        POP ESI
006A482F  5D                        POP EBP
006A4830  C2 04 00                  RET 0x4
LAB_006a4833:
006A4833  6A 4F                     PUSH 0x4f
006A4835  50                        PUSH EAX
006A4836  FF 15 A4 BB 85 00         CALL dword ptr [0x0085bba4]
006A483C  85 C0                     TEST EAX,EAX
006A483E  74 4B                     JZ 0x006a488b
006A4840  A1 90 C4 7E 00            MOV EAX,[0x007ec490]
006A4845  8B 0D 94 C4 7E 00         MOV ECX,dword ptr [0x007ec494]
006A484B  8B 15 98 C4 7E 00         MOV EDX,dword ptr [0x007ec498]
006A4851  A3 F4 49 85 00            MOV [0x008549f4],EAX
006A4856  66 A1 9C C4 7E 00         MOV AX,[0x007ec49c]
006A485C  89 0D F8 49 85 00         MOV dword ptr [0x008549f8],ECX
006A4862  8A 0D 9E C4 7E 00         MOV CL,byte ptr [0x007ec49e]
006A4868  66 A3 00 4A 85 00         MOV [0x00854a00],AX
006A486E  89 15 FC 49 85 00         MOV dword ptr [0x008549fc],EDX
006A4874  88 0D 02 4A 85 00         MOV byte ptr [0x00854a02],CL
006A487A  C6 05 43 4A 85 00 00      MOV byte ptr [0x00854a43],0x0
006A4881  B8 F4 49 85 00            MOV EAX,0x8549f4
006A4886  5E                        POP ESI
006A4887  5D                        POP EBP
006A4888  C2 04 00                  RET 0x4
LAB_006a488b:
006A488B  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
006A488E  6A 4F                     PUSH 0x4f
006A4890  52                        PUSH EDX
006A4891  68 F4 49 85 00            PUSH 0x8549f4
006A4896  E8 A5 9A 08 00            CALL 0x0072e340
006A489B  83 C4 0C                  ADD ESP,0xc
006A489E  C6 05 43 4A 85 00 00      MOV byte ptr [0x00854a43],0x0
006A48A5  B8 F4 49 85 00            MOV EAX,0x8549f4
006A48AA  5E                        POP ESI
006A48AB  5D                        POP EBP
006A48AC  C2 04 00                  RET 0x4
