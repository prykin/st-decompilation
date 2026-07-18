FUN_004b7aa0:
004B7AA0  56                        PUSH ESI
004B7AA1  8B F1                     MOV ESI,ECX
004B7AA3  6A 0E                     PUSH 0xe
004B7AA5  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004B7AAB  E8 FF C7 F4 FF            CALL 0x004042af
004B7AB0  8B 8E F5 01 00 00         MOV ECX,dword ptr [ESI + 0x1f5]
004B7AB6  3B 81 0C 02 00 00         CMP EAX,dword ptr [ECX + 0x20c]
004B7ABC  75 38                     JNZ 0x004b7af6
004B7ABE  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004B7AC4  48                        DEC EAX
004B7AC5  74 1C                     JZ 0x004b7ae3
004B7AC7  83 E8 02                  SUB EAX,0x2
004B7ACA  75 2A                     JNZ 0x004b7af6
004B7ACC  6A 00                     PUSH 0x0
004B7ACE  8B CE                     MOV ECX,ESI
004B7AD0  C7 86 D0 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4d0],0x0
004B7ADA  E8 18 B2 F4 FF            CALL 0x00402cf7
004B7ADF  33 C0                     XOR EAX,EAX
004B7AE1  5E                        POP ESI
004B7AE2  C3                        RET
LAB_004b7ae3:
004B7AE3  6A 00                     PUSH 0x0
004B7AE5  8B CE                     MOV ECX,ESI
004B7AE7  C7 86 D0 04 00 00 02 00 00 00  MOV dword ptr [ESI + 0x4d0],0x2
004B7AF1  E8 01 B2 F4 FF            CALL 0x00402cf7
LAB_004b7af6:
004B7AF6  33 C0                     XOR EAX,EAX
004B7AF8  5E                        POP ESI
004B7AF9  C3                        RET
