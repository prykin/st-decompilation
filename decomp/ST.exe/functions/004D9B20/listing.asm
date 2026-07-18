FUN_004d9b20:
004D9B20  56                        PUSH ESI
004D9B21  8B F1                     MOV ESI,ECX
004D9B23  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004D9B29  85 C0                     TEST EAX,EAX
004D9B2B  74 59                     JZ 0x004d9b86
004D9B2D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D9B33  50                        PUSH EAX
004D9B34  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004D9B37  50                        PUSH EAX
004D9B38  E8 F9 A7 F2 FF            CALL 0x00404336
004D9B3D  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004D9B40  51                        PUSH ECX
004D9B41  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D9B47  E8 AA 8D F2 FF            CALL 0x004028f6
004D9B4C  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
004D9B4F  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004D9B52  33 C0                     XOR EAX,EAX
004D9B54  8A 82 2D 11 00 00         MOV AL,byte ptr [EDX + 0x112d]
004D9B5A  3B C8                     CMP ECX,EAX
004D9B5C  75 0C                     JNZ 0x004d9b6a
004D9B5E  51                        PUSH ECX
004D9B5F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D9B65  E8 23 B0 F2 FF            CALL 0x00404b8d
LAB_004d9b6a:
004D9B6A  C7 86 D0 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4d0],0x0
004D9B74  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004D9B7A  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004D9B80  89 86 D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EAX
LAB_004d9b86:
004D9B86  33 C0                     XOR EAX,EAX
004D9B88  5E                        POP ESI
004D9B89  C3                        RET
