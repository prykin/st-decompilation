FUN_004cc220:
004CC220  56                        PUSH ESI
004CC221  57                        PUSH EDI
004CC222  8B F1                     MOV ESI,ECX
004CC224  33 FF                     XOR EDI,EDI
004CC226  33 D2                     XOR EDX,EDX
004CC228  B9 33 00 00 00            MOV ECX,0x33
004CC22D  89 BE 44 04 00 00         MOV dword ptr [ESI + 0x444],EDI
004CC233  89 BE 48 04 00 00         MOV dword ptr [ESI + 0x448],EDI
004CC239  C7 86 4C 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x44c],0xffffffff
004CC243  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
004CC246  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
004CC24C  05 39 30 00 00            ADD EAX,0x3039
004CC251  6A 40                     PUSH 0x40
004CC253  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
004CC256  C1 E8 10                  SHR EAX,0x10
004CC259  F7 F1                     DIV ECX
004CC25B  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004CC260  03 90 E4 00 00 00         ADD EDX,dword ptr [EAX + 0xe4]
004CC266  89 96 50 04 00 00         MOV dword ptr [ESI + 0x450],EDX
004CC26C  E8 BF 22 26 00            CALL 0x0072e530
004CC271  83 C4 04                  ADD ESP,0x4
004CC274  3B C7                     CMP EAX,EDI
004CC276  74 09                     JZ 0x004cc281
004CC278  8B C8                     MOV ECX,EAX
004CC27A  E8 97 50 F3 FF            CALL 0x00401316
004CC27F  EB 02                     JMP 0x004cc283
LAB_004cc281:
004CC281  33 C0                     XOR EAX,EAX
LAB_004cc283:
004CC283  8B 8E 0F 06 00 00         MOV ECX,dword ptr [ESI + 0x60f]
004CC289  8B 96 0B 06 00 00         MOV EDX,dword ptr [ESI + 0x60b]
004CC28F  6A 11                     PUSH 0x11
004CC291  51                        PUSH ECX
004CC292  8B 8E 17 06 00 00         MOV ECX,dword ptr [ESI + 0x617]
004CC298  52                        PUSH EDX
004CC299  8B 96 13 06 00 00         MOV EDX,dword ptr [ESI + 0x613]
004CC29F  57                        PUSH EDI
004CC2A0  89 86 03 06 00 00         MOV dword ptr [ESI + 0x603],EAX
004CC2A6  51                        PUSH ECX
004CC2A7  8B 0D CC 73 80 00         MOV ECX,dword ptr [0x008073cc]
004CC2AD  52                        PUSH EDX
004CC2AE  51                        PUSH ECX
004CC2AF  8B C8                     MOV ECX,EAX
004CC2B1  E8 C5 90 F3 FF            CALL 0x0040537b
004CC2B6  3B C7                     CMP EAX,EDI
004CC2B8  74 17                     JZ 0x004cc2d1
004CC2BA  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004CC2C0  68 55 03 00 00            PUSH 0x355
004CC2C5  68 D0 D4 7A 00            PUSH 0x7ad4d0
004CC2CA  52                        PUSH EDX
004CC2CB  50                        PUSH EAX
004CC2CC  E8 6F 9B 1D 00            CALL 0x006a5e40
LAB_004cc2d1:
004CC2D1  89 BE 40 04 00 00         MOV dword ptr [ESI + 0x440],EDI
004CC2D7  89 BE 3C 04 00 00         MOV dword ptr [ESI + 0x43c],EDI
004CC2DD  5F                        POP EDI
004CC2DE  33 C0                     XOR EAX,EAX
004CC2E0  5E                        POP ESI
004CC2E1  C3                        RET
