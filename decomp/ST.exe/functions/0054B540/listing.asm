FUN_0054b540:
0054B540  53                        PUSH EBX
0054B541  56                        PUSH ESI
0054B542  8B F1                     MOV ESI,ECX
0054B544  33 DB                     XOR EBX,EBX
0054B546  33 C0                     XOR EAX,EAX
0054B548  8D 8E D3 00 00 00         LEA ECX,[ESI + 0xd3]
0054B54E  89 9E CD 00 00 00         MOV dword ptr [ESI + 0xcd],EBX
0054B554  89 01                     MOV dword ptr [ECX],EAX
0054B556  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0054B559  66 89 41 08               MOV word ptr [ECX + 0x8],AX
0054B55D  88 41 0A                  MOV byte ptr [ECX + 0xa],AL
0054B560  8B 86 0B 01 00 00         MOV EAX,dword ptr [ESI + 0x10b]
0054B566  3B C3                     CMP EAX,EBX
0054B568  7C 78                     JL 0x0054b5e2
0054B56A  80 BE DE 00 00 00 05      CMP byte ptr [ESI + 0xde],0x5
0054B571  75 59                     JNZ 0x0054b5cc
0054B573  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0054B579  3B CB                     CMP ECX,EBX
0054B57B  74 06                     JZ 0x0054b583
0054B57D  50                        PUSH EAX
0054B57E  E8 1D D6 19 00            CALL 0x006e8ba0
LAB_0054b583:
0054B583  39 9E A9 00 00 00         CMP dword ptr [ESI + 0xa9],EBX
0054B589  74 1E                     JZ 0x0054b5a9
0054B58B  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0054B58E  83 F8 FF                  CMP EAX,-0x1
0054B591  74 22                     JZ 0x0054b5b5
0054B593  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
0054B596  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
0054B599  52                        PUSH EDX
0054B59A  8B 56 60                  MOV EDX,dword ptr [ESI + 0x60]
0054B59D  51                        PUSH ECX
0054B59E  6A FE                     PUSH -0x2
0054B5A0  50                        PUSH EAX
0054B5A1  52                        PUSH EDX
0054B5A2  E8 29 7F 16 00            CALL 0x006b34d0
0054B5A7  EB 0C                     JMP 0x0054b5b5
LAB_0054b5a9:
0054B5A9  8B 86 AD 00 00 00         MOV EAX,dword ptr [ESI + 0xad]
0054B5AF  50                        PUSH EAX
0054B5B0  E8 AB D4 16 00            CALL 0x006b8a60
LAB_0054b5b5:
0054B5B5  8B 8E C9 00 00 00         MOV ECX,dword ptr [ESI + 0xc9]
0054B5BB  8B 96 C5 00 00 00         MOV EDX,dword ptr [ESI + 0xc5]
0054B5C1  51                        PUSH ECX
0054B5C2  52                        PUSH EDX
0054B5C3  8B CE                     MOV ECX,ESI
0054B5C5  E8 54 6E EB FF            CALL 0x0040241e
0054B5CA  EB 0C                     JMP 0x0054b5d8
LAB_0054b5cc:
0054B5CC  50                        PUSH EAX
0054B5CD  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0054B5D2  50                        PUSH EAX
0054B5D3  E8 D8 85 16 00            CALL 0x006b3bb0
LAB_0054b5d8:
0054B5D8  C7 86 0B 01 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x10b],0xffffffff
LAB_0054b5e2:
0054B5E2  88 9E DE 00 00 00         MOV byte ptr [ESI + 0xde],BL
0054B5E8  89 9E 96 04 00 00         MOV dword ptr [ESI + 0x496],EBX
0054B5EE  89 9E 9A 04 00 00         MOV dword ptr [ESI + 0x49a],EBX
0054B5F4  89 9E AE 04 00 00         MOV dword ptr [ESI + 0x4ae],EBX
0054B5FA  5E                        POP ESI
0054B5FB  5B                        POP EBX
0054B5FC  C3                        RET
