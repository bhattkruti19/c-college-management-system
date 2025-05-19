# 🎬 Movie Recommendation System

A basic movie recommendation tool that suggests similar movies based on **genres** and **user input** using simple statistical techniques.

---

## 📌 Features

- 📁 Reads movie data from CSV files
- 🎯 Suggests similar movies based on genre similarity
- 🧠 Uses basic statistics for similarity matching
- 🔍 Simple and interactive command-line interface

---

## 💻 Technologies Used

- **Language:** Python
- **Data Handling:** CSV module
- **Data Analysis:** Basic Statistics (cosine similarity / count-based)
- **Tools:** Excel for data preparation and review

---

## 📁 File Structure

```
📁 Movie-Recommendation-System
├── movies.csv                 # CSV file containing movie data (title, genres)
├── recommender.py             # Python script for the recommendation logic
└── README.md                  # Project documentation
```

---

## 🚀 How to Run

1. **Install Python (if not already):** [https://python.org](https://python.org)

2. **Run the Python script:**
   ```bash
   python recommender.py
   ```

3. **Enter a movie name:** Get similar recommendations instantly.

---

## 📌 Sample CSV Format

```csv
title,genres
The Matrix,Action|Sci-Fi
Toy Story,Animation|Comedy|Family
Inception,Action|Adventure|Sci-Fi
The Godfather,Crime|Drama
```

---

## 📊 How It Works

- Converts genres into binary vectors
- Uses basic similarity (e.g., cosine similarity or overlap count)
- Returns a sorted list of most similar movies based on input

---

## 📑 Author

Developed as part of an academic project by a student of **G H Patel College of Engineering and Technology (GCET)**.

---

## 📃 License

This project is open-source and free to use for educational purposes.
