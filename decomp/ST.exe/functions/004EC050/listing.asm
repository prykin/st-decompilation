FUN_004ec050:
004EC050  56                        PUSH ESI
004EC051  8B F1                     MOV ESI,ECX
004EC053  8B 86 FF 05 00 00         MOV EAX,dword ptr [ESI + 0x5ff]
004EC059  85 C0                     TEST EAX,EAX
004EC05B  75 65                     JNZ 0x004ec0c2
004EC05D  6A 40                     PUSH 0x40
004EC05F  E8 CC 24 24 00            CALL 0x0072e530
004EC064  83 C4 04                  ADD ESP,0x4
004EC067  85 C0                     TEST EAX,EAX
004EC069  74 09                     JZ 0x004ec074
004EC06B  8B C8                     MOV ECX,EAX
004EC06D  E8 A4 52 F1 FF            CALL 0x00401316
004EC072  EB 02                     JMP 0x004ec076
LAB_004ec074:
004EC074  33 C0                     XOR EAX,EAX
LAB_004ec076:
004EC076  6A 11                     PUSH 0x11
004EC078  68 8C 00 00 00            PUSH 0x8c
004EC07D  68 B4 00 00 00            PUSH 0xb4
004EC082  89 86 FF 05 00 00         MOV dword ptr [ESI + 0x5ff],EAX
004EC088  8B 0D CC 73 80 00         MOV ECX,dword ptr [0x008073cc]
004EC08E  6A 00                     PUSH 0x0
004EC090  6A 45                     PUSH 0x45
004EC092  6A 5A                     PUSH 0x5a
004EC094  51                        PUSH ECX
004EC095  8B C8                     MOV ECX,EAX
004EC097  E8 DF 92 F1 FF            CALL 0x0040537b
004EC09C  85 C0                     TEST EAX,EAX
004EC09E  74 17                     JZ 0x004ec0b7
004EC0A0  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004EC0A6  68 1B 01 00 00            PUSH 0x11b
004EC0AB  68 48 16 7C 00            PUSH 0x7c1648
004EC0B0  52                        PUSH EDX
004EC0B1  50                        PUSH EAX
004EC0B2  E8 89 9D 1B 00            CALL 0x006a5e40
LAB_004ec0b7:
004EC0B7  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004EC0BD  E8 CE 69 F1 FF            CALL 0x00402a90
LAB_004ec0c2:
004EC0C2  33 C0                     XOR EAX,EAX
004EC0C4  5E                        POP ESI
004EC0C5  C3                        RET
