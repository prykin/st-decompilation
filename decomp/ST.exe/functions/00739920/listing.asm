FUN_00739920:
00739920  55                        PUSH EBP
00739921  8B EC                     MOV EBP,ESP
00739923  51                        PUSH ECX
00739924  83 3D 14 72 85 00 00      CMP dword ptr [0x00857214],0x0
0073992B  0F 84 BB 00 00 00         JZ 0x007399ec
00739931  6A 4A                     PUSH 0x4a
00739933  68 DC 02 7A 00            PUSH 0x7a02dc
00739938  6A 02                     PUSH 0x2
0073993A  6A 30                     PUSH 0x30
0073993C  6A 01                     PUSH 0x1
0073993E  E8 05 89 CC FF            CALL 0x00402248
00739943  83 C4 14                  ADD ESP,0x14
00739946  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00739949  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
0073994D  75 0A                     JNZ 0x00739959
0073994F  B8 01 00 00 00            MOV EAX,0x1
00739954  E9 F3 00 00 00            JMP 0x00739a4c
LAB_00739959:
00739959  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073995C  50                        PUSH EAX
0073995D  E8 EE 00 00 00            CALL 0x00739a50
00739962  83 C4 04                  ADD ESP,0x4
00739965  85 C0                     TEST EAX,EAX
00739967  74 24                     JZ 0x0073998d
00739969  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073996C  51                        PUSH ECX
0073996D  E8 6E 03 00 00            CALL 0x00739ce0
00739972  83 C4 04                  ADD ESP,0x4
00739975  6A 02                     PUSH 0x2
00739977  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073997A  52                        PUSH EDX
0073997B  E8 8C AB CC FF            CALL 0x0040450c
00739980  83 C4 08                  ADD ESP,0x8
00739983  B8 01 00 00 00            MOV EAX,0x1
00739988  E9 BF 00 00 00            JMP 0x00739a4c
LAB_0073998d:
0073998D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00739990  8B 0D 30 27 7F 00         MOV ECX,dword ptr [0x007f2730]
00739996  8B 11                     MOV EDX,dword ptr [ECX]
00739998  89 10                     MOV dword ptr [EAX],EDX
0073999A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073999D  8B 0D 30 27 7F 00         MOV ECX,dword ptr [0x007f2730]
007399A3  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
007399A6  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
007399A9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007399AC  8B 0D 30 27 7F 00         MOV ECX,dword ptr [0x007f2730]
007399B2  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
007399B5  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
007399B8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007399BB  A3 30 27 7F 00            MOV [0x007f2730],EAX
007399C0  8B 0D 44 72 85 00         MOV ECX,dword ptr [0x00857244]
007399C6  51                        PUSH ECX
007399C7  E8 14 03 00 00            CALL 0x00739ce0
007399CC  83 C4 04                  ADD ESP,0x4
007399CF  6A 02                     PUSH 0x2
007399D1  8B 15 44 72 85 00         MOV EDX,dword ptr [0x00857244]
007399D7  52                        PUSH EDX
007399D8  E8 2F AB CC FF            CALL 0x0040450c
007399DD  83 C4 08                  ADD ESP,0x8
007399E0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007399E3  A3 44 72 85 00            MOV [0x00857244],EAX
007399E8  33 C0                     XOR EAX,EAX
007399EA  EB 60                     JMP 0x00739a4c
LAB_007399ec:
007399EC  8B 0D 30 27 7F 00         MOV ECX,dword ptr [0x007f2730]
007399F2  8B 11                     MOV EDX,dword ptr [ECX]
007399F4  89 15 00 27 7F 00         MOV dword ptr [0x007f2700],EDX
007399FA  A1 30 27 7F 00            MOV EAX,[0x007f2730]
007399FF  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00739A02  89 0D 04 27 7F 00         MOV dword ptr [0x007f2704],ECX
00739A08  8B 15 30 27 7F 00         MOV EDX,dword ptr [0x007f2730]
00739A0E  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00739A11  A3 08 27 7F 00            MOV [0x007f2708],EAX
00739A16  C7 05 30 27 7F 00 00 27 7F 00  MOV dword ptr [0x007f2730],0x7f2700
00739A20  8B 0D 44 72 85 00         MOV ECX,dword ptr [0x00857244]
00739A26  51                        PUSH ECX
00739A27  E8 B4 02 00 00            CALL 0x00739ce0
00739A2C  83 C4 04                  ADD ESP,0x4
00739A2F  6A 02                     PUSH 0x2
00739A31  8B 15 44 72 85 00         MOV EDX,dword ptr [0x00857244]
00739A37  52                        PUSH EDX
00739A38  E8 CF AA CC FF            CALL 0x0040450c
00739A3D  83 C4 08                  ADD ESP,0x8
00739A40  C7 05 44 72 85 00 00 00 00 00  MOV dword ptr [0x00857244],0x0
00739A4A  33 C0                     XOR EAX,EAX
LAB_00739a4c:
00739A4C  8B E5                     MOV ESP,EBP
00739A4E  5D                        POP EBP
00739A4F  C3                        RET
