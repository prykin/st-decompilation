FUN_005f6df0:
005F6DF0  56                        PUSH ESI
005F6DF1  8B F1                     MOV ESI,ECX
005F6DF3  57                        PUSH EDI
005F6DF4  51                        PUSH ECX
005F6DF5  DB 86 C9 02 00 00         FILD dword ptr [ESI + 0x2c9]
005F6DFB  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
005F6E01  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F6E07  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F6E0D  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
005F6E13  D9 1C 24                  FSTP float ptr [ESP]
005F6E16  DB 86 C5 02 00 00         FILD dword ptr [ESI + 0x2c5]
005F6E1C  51                        PUSH ECX
005F6E1D  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F6E23  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F6E29  D9 1C 24                  FSTP float ptr [ESP]
005F6E2C  DB 86 C1 02 00 00         FILD dword ptr [ESI + 0x2c1]
005F6E32  51                        PUSH ECX
005F6E33  8B CF                     MOV ECX,EDI
005F6E35  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F6E3B  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F6E41  D9 1C 24                  FSTP float ptr [ESP]
005F6E44  E8 90 D7 E0 FF            CALL 0x004045d9
005F6E49  66 8B 86 C9 02 00 00      MOV AX,word ptr [ESI + 0x2c9]
005F6E50  66 8B 8E C5 02 00 00      MOV CX,word ptr [ESI + 0x2c5]
005F6E57  66 8B 96 C1 02 00 00      MOV DX,word ptr [ESI + 0x2c1]
005F6E5E  50                        PUSH EAX
005F6E5F  51                        PUSH ECX
005F6E60  52                        PUSH EDX
005F6E61  8B CE                     MOV ECX,ESI
005F6E63  E8 9F C2 E0 FF            CALL 0x00403107
005F6E68  6A 0E                     PUSH 0xe
005F6E6A  8B CF                     MOV ECX,EDI
005F6E6C  E8 35 EC E0 FF            CALL 0x00405aa6
005F6E71  8B CE                     MOV ECX,ESI
005F6E73  E8 41 AC E0 FF            CALL 0x00401ab9
005F6E78  6A 00                     PUSH 0x0
005F6E7A  8B CF                     MOV ECX,EDI
005F6E7C  E8 01 BB E0 FF            CALL 0x00402982
005F6E81  5F                        POP EDI
005F6E82  5E                        POP ESI
005F6E83  C3                        RET
