FUN_0070be00:
0070BE00  55                        PUSH EBP
0070BE01  8B EC                     MOV EBP,ESP
0070BE03  83 EC 44                  SUB ESP,0x44
0070BE06  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070BE0B  8D 55 C0                  LEA EDX,[EBP + -0x40]
0070BE0E  8D 4D BC                  LEA ECX,[EBP + -0x44]
0070BE11  6A 00                     PUSH 0x0
0070BE13  52                        PUSH EDX
0070BE14  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0070BE17  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070BE1D  E8 CE 19 02 00            CALL 0x0072d7f0
0070BE22  83 C4 08                  ADD ESP,0x8
0070BE25  85 C0                     TEST EAX,EAX
0070BE27  75 39                     JNZ 0x0070be62
0070BE29  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
0070BE2C  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
0070BE2F  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0070BE32  50                        PUSH EAX
0070BE33  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0070BE36  51                        PUSH ECX
0070BE37  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0070BE3A  52                        PUSH EDX
0070BE3B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0070BE3E  50                        PUSH EAX
0070BE3F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0070BE42  51                        PUSH ECX
0070BE43  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0070BE46  52                        PUSH EDX
0070BE47  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0070BE4A  50                        PUSH EAX
0070BE4B  51                        PUSH ECX
0070BE4C  52                        PUSH EDX
0070BE4D  E8 AE FA FF FF            CALL 0x0070b900
0070BE52  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0070BE55  83 C4 24                  ADD ESP,0x24
0070BE58  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070BE5E  8B E5                     MOV ESP,EBP
0070BE60  5D                        POP EBP
0070BE61  C3                        RET
LAB_0070be62:
0070BE62  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0070BE65  33 C0                     XOR EAX,EAX
0070BE67  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070BE6D  8B E5                     MOV ESP,EBP
0070BE6F  5D                        POP EBP
0070BE70  C3                        RET
