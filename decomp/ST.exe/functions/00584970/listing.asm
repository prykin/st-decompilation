STLBombC::STLBombC:
00584970  56                        PUSH ESI
00584971  57                        PUSH EDI
00584972  8B F1                     MOV ESI,ECX
00584974  E8 BA CF E7 FF            CALL 0x00401933
00584979  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0058497F  8B CF                     MOV ECX,EDI
00584981  E8 90 C9 E7 FF            CALL 0x00401316
00584986  C7 07 50 BA 79 00         MOV dword ptr [EDI],0x79ba50
0058498C  33 C0                     XOR EAX,EAX
0058498E  B9 0C 00 00 00            MOV ECX,0xc
00584993  8D BE 58 02 00 00         LEA EDI,[ESI + 0x258]
00584999  C7 06 F0 B8 79 00         MOV dword ptr [ESI],0x79b8f0
0058499F  C7 86 31 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x231],0x2
005849A9  89 86 35 02 00 00         MOV dword ptr [ESI + 0x235],EAX
005849AF  89 86 39 02 00 00         MOV dword ptr [ESI + 0x239],EAX
005849B5  89 86 3D 02 00 00         MOV dword ptr [ESI + 0x23d],EAX
005849BB  89 86 41 02 00 00         MOV dword ptr [ESI + 0x241],EAX
005849C1  89 86 45 02 00 00         MOV dword ptr [ESI + 0x245],EAX
005849C7  89 86 49 02 00 00         MOV dword ptr [ESI + 0x249],EAX
005849CD  89 86 4D 02 00 00         MOV dword ptr [ESI + 0x24d],EAX
005849D3  89 86 51 02 00 00         MOV dword ptr [ESI + 0x251],EAX
005849D9  88 86 55 02 00 00         MOV byte ptr [ESI + 0x255],AL
005849DF  88 86 56 02 00 00         MOV byte ptr [ESI + 0x256],AL
005849E5  88 86 57 02 00 00         MOV byte ptr [ESI + 0x257],AL
005849EB  F3 AB                     STOSD.REP ES:EDI
005849ED  66 AB                     STOSW ES:EDI
005849EF  8B C6                     MOV EAX,ESI
005849F1  5F                        POP EDI
005849F2  5E                        POP ESI
005849F3  C3                        RET
