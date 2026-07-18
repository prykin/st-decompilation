FUN_005738d0:
005738D0  55                        PUSH EBP
005738D1  8B EC                     MOV EBP,ESP
005738D3  81 EC 04 01 00 00         SUB ESP,0x104
005738D9  56                        PUSH ESI
005738DA  6A 01                     PUSH 0x1
005738DC  8B F1                     MOV ESI,ECX
005738DE  6A 00                     PUSH 0x0
005738E0  E8 84 0E E9 FF            CALL 0x00404769
005738E5  8B CE                     MOV ECX,ESI
005738E7  E8 BC ED E8 FF            CALL 0x004026a8
005738EC  8B 0D CC B0 79 00         MOV ECX,dword ptr [0x0079b0cc]
005738F2  8D 86 85 07 00 00         LEA EAX,[ESI + 0x785]
005738F8  50                        PUSH EAX
005738F9  8D 56 28                  LEA EDX,[ESI + 0x28]
005738FC  51                        PUSH ECX
005738FD  52                        PUSH EDX
005738FE  8D 85 FC FE FF FF         LEA EAX,[EBP + 0xfffffefc]
00573904  68 DC 6E 7C 00            PUSH 0x7c6edc
00573909  50                        PUSH EAX
0057390A  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00573910  83 C4 14                  ADD ESP,0x14
00573913  8D 8D FC FE FF FF         LEA ECX,[EBP + 0xfffffefc]
00573919  6A 00                     PUSH 0x0
0057391B  51                        PUSH ECX
0057391C  FF 15 7C BC 85 00         CALL dword ptr [0x0085bc7c]
00573922  6A 01                     PUSH 0x1
00573924  8B CE                     MOV ECX,ESI
00573926  E8 8E 09 E9 FF            CALL 0x004042b9
0057392B  85 C0                     TEST EAX,EAX
0057392D  74 20                     JZ 0x0057394f
0057392F  8B CE                     MOV ECX,ESI
00573931  E8 7A 0D E9 FF            CALL 0x004046b0
00573936  85 C0                     TEST EAX,EAX
00573938  74 15                     JZ 0x0057394f
0057393A  B8 01 00 00 00            MOV EAX,0x1
0057393F  88 86 EE 0D 00 00         MOV byte ptr [ESI + 0xdee],AL
00573945  25 FF 00 00 00            AND EAX,0xff
0057394A  5E                        POP ESI
0057394B  8B E5                     MOV ESP,EBP
0057394D  5D                        POP EBP
0057394E  C3                        RET
LAB_0057394f:
0057394F  33 C0                     XOR EAX,EAX
00573951  88 86 EE 0D 00 00         MOV byte ptr [ESI + 0xdee],AL
00573957  25 FF 00 00 00            AND EAX,0xff
0057395C  5E                        POP ESI
0057395D  8B E5                     MOV ESP,EBP
0057395F  5D                        POP EBP
00573960  C3                        RET
