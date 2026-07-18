FUN_004dfb00:
004DFB00  56                        PUSH ESI
004DFB01  8B F1                     MOV ESI,ECX
004DFB03  81 BE D0 04 00 00 F4 01 00 00  CMP dword ptr [ESI + 0x4d0],0x1f4
004DFB0D  7D 5A                     JGE 0x004dfb69
004DFB0F  E8 A4 2F F2 FF            CALL 0x00402ab8
004DFB14  8B C8                     MOV ECX,EAX
004DFB16  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004DFB1B  F7 E1                     MUL ECX
004DFB1D  8B 86 D4 04 00 00         MOV EAX,dword ptr [ESI + 0x4d4]
004DFB23  C1 EA 05                  SHR EDX,0x5
004DFB26  03 D0                     ADD EDX,EAX
004DFB28  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004DFB2D  39 90 E4 00 00 00         CMP dword ptr [EAX + 0xe4],EDX
004DFB33  72 34                     JC 0x004dfb69
004DFB35  8B 8E D0 04 00 00         MOV ECX,dword ptr [ESI + 0x4d0]
004DFB3B  83 C1 05                  ADD ECX,0x5
004DFB3E  8B C1                     MOV EAX,ECX
004DFB40  89 8E D0 04 00 00         MOV dword ptr [ESI + 0x4d0],ECX
004DFB46  3D F4 01 00 00            CMP EAX,0x1f4
004DFB4B  7E 0A                     JLE 0x004dfb57
004DFB4D  C7 86 D0 04 00 00 F4 01 00 00  MOV dword ptr [ESI + 0x4d0],0x1f4
LAB_004dfb57:
004DFB57  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DFB5D  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004DFB63  89 96 D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EDX
LAB_004dfb69:
004DFB69  33 C0                     XOR EAX,EAX
004DFB6B  5E                        POP ESI
004DFB6C  C3                        RET
