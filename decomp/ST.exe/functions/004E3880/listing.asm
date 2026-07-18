FUN_004e3880:
004E3880  8D 91 D0 04 00 00         LEA EDX,[ECX + 0x4d0]
004E3886  33 C0                     XOR EAX,EAX
004E3888  6A 1D                     PUSH 0x1d
004E388A  68 20 FA 7B 00            PUSH 0x7bfa20
004E388F  89 02                     MOV dword ptr [EDX],EAX
004E3891  81 C1 D5 01 00 00         ADD ECX,0x1d5
004E3897  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
004E389A  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
004E389D  89 42 0C                  MOV dword ptr [EDX + 0xc],EAX
004E38A0  89 42 10                  MOV dword ptr [EDX + 0x10],EAX
004E38A3  C7 81 0F 03 00 00 05 00 00 00  MOV dword ptr [ECX + 0x30f],0x5
004E38AD  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004E38B2  8B 90 E4 00 00 00         MOV EDX,dword ptr [EAX + 0xe4]
004E38B8  81 C2 71 02 00 00         ADD EDX,0x271
004E38BE  89 91 13 03 00 00         MOV dword ptr [ECX + 0x313],EDX
004E38C4  A1 8C 67 80 00            MOV EAX,[0x0080678c]
004E38C9  50                        PUSH EAX
004E38CA  6A 0B                     PUSH 0xb
004E38CC  E8 B2 08 F2 FF            CALL 0x00404183
004E38D1  85 C0                     TEST EAX,EAX
004E38D3  74 14                     JZ 0x004e38e9
004E38D5  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004E38DB  6A 18                     PUSH 0x18
004E38DD  68 F8 F9 7B 00            PUSH 0x7bf9f8
004E38E2  51                        PUSH ECX
004E38E3  50                        PUSH EAX
004E38E4  E8 57 25 1C 00            CALL 0x006a5e40
LAB_004e38e9:
004E38E9  33 C0                     XOR EAX,EAX
004E38EB  C3                        RET
