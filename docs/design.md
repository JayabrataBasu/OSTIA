# System Design

## Overview
OSTIA is designed as a modular system with clearly defined components to ensure scalability and maintainability.

## Architecture Diagram (High-Level)
 _____mmmmm________


 CLI ↔ Command Processor ↔ Core Modules ↔ Knowledge Base / Task Manager / Context Manager

## Core Components

### 1. Command-Line Interface (CLI)
Handles user input/output and passes commands to the `CommandProcessor`.

### 2. Command Processor
Parses user commands into structured data and delegates tasks to the appropriate module.

### 3. Knowledge Base
Stores academic concepts, programming tips, and resources for query-based retrieval.

### 4. Task Manager
Manages user tasks with CRUD operations and prioritization rules.

### 5. Context Manager (Future Work)
Tracks conversation state for multi-turn interactions.
