FUN_0054a8d0:
0054A8D0  53                        PUSH EBX
0054A8D1  56                        PUSH ESI
0054A8D2  8B F1                     MOV ESI,ECX
0054A8D4  33 DB                     XOR EBX,EBX
0054A8D6  8B 0D AC B2 7F 00         MOV ECX,dword ptr [0x007fb2ac]
0054A8DC  3B CB                     CMP ECX,EBX
0054A8DE  74 0A                     JZ 0x0054a8ea
0054A8E0  39 59 18                  CMP dword ptr [ECX + 0x18],EBX
0054A8E3  75 05                     JNZ 0x0054a8ea
0054A8E5  E8 52 6C EB FF            CALL 0x0040153c
LAB_0054a8ea:
0054A8EA  80 BE DE 00 00 00 05      CMP byte ptr [ESI + 0xde],0x5
0054A8F1  75 73                     JNZ 0x0054a966
0054A8F3  8B 86 0B 01 00 00         MOV EAX,dword ptr [ESI + 0x10b]
0054A8F9  3B C3                     CMP EAX,EBX
0054A8FB  7C 69                     JL 0x0054a966
0054A8FD  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0054A903  3B CB                     CMP ECX,EBX
0054A905  74 06                     JZ 0x0054a90d
0054A907  50                        PUSH EAX
0054A908  E8 93 E2 19 00            CALL 0x006e8ba0
LAB_0054a90d:
0054A90D  8B 86 A9 00 00 00         MOV EAX,dword ptr [ESI + 0xa9]
0054A913  C7 86 0B 01 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x10b],0xffffffff
0054A91D  3B C3                     CMP EAX,EBX
0054A91F  74 1E                     JZ 0x0054a93f
0054A921  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0054A924  83 F8 FF                  CMP EAX,-0x1
0054A927  74 22                     JZ 0x0054a94b
0054A929  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
0054A92C  8B 56 34                  MOV EDX,dword ptr [ESI + 0x34]
0054A92F  51                        PUSH ECX
0054A930  52                        PUSH EDX
0054A931  6A FE                     PUSH -0x2
0054A933  50                        PUSH EAX
0054A934  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
0054A937  50                        PUSH EAX
0054A938  E8 93 8B 16 00            CALL 0x006b34d0
0054A93D  EB 0C                     JMP 0x0054a94b
LAB_0054a93f:
0054A93F  8B 8E AD 00 00 00         MOV ECX,dword ptr [ESI + 0xad]
0054A945  51                        PUSH ECX
0054A946  E8 15 E1 16 00            CALL 0x006b8a60
LAB_0054a94b:
0054A94B  8B 96 C9 00 00 00         MOV EDX,dword ptr [ESI + 0xc9]
0054A951  8B 86 C5 00 00 00         MOV EAX,dword ptr [ESI + 0xc5]
0054A957  52                        PUSH EDX
0054A958  50                        PUSH EAX
0054A959  8B CE                     MOV ECX,ESI
0054A95B  E8 BE 7A EB FF            CALL 0x0040241e
0054A960  88 9E DE 00 00 00         MOV byte ptr [ESI + 0xde],BL
LAB_0054a966:
0054A966  89 9E A2 04 00 00         MOV dword ptr [ESI + 0x4a2],EBX
0054A96C  89 9E AA 04 00 00         MOV dword ptr [ESI + 0x4aa],EBX
0054A972  89 9E A6 04 00 00         MOV dword ptr [ESI + 0x4a6],EBX
0054A978  5E                        POP ESI
0054A979  5B                        POP EBX
0054A97A  C3                        RET
